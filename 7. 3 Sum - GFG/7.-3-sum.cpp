// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int> > findTriplets(vector<int> &nums, int n) {
        // code here
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int y = -x;
            int start =i+1;
            int end = n-1;
            while(start<end){
                if(nums[start]+nums[end]==y){
                    res.push_back({nums[i],nums[start],nums[end]});
                    while(start<end && nums[start]==nums[start+1])start++;
                    while(start<end && nums[end]==nums[end-1]) end--;
                    start++;
                    end--;
                }
                else if(nums[start]+nums[end]>y) end--;
                else start++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        vector<vector<int>>ans = ob.findTriplets (A, N);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < 3; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}  // } Driver Code Ends