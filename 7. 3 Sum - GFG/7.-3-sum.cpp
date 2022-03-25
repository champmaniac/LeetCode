// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int> > findTriplets(vector<int> &nums, int N) {
        // code here
        int n = N;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            int a = nums[i];
            int t = -a;
            int s=i+1; // start
            int e=n-1; // end
            while(s<e){
                if(nums[s]+nums[e]==t){
                    res.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;   
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>t)
                    e--;
                else
                    s++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
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