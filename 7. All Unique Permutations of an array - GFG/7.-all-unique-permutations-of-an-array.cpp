// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    set<vector<int>> st;
    vector<vector<int>> ans;
    void solve(int ind, vector<int> arr, int n){
        if(ind==n){
            st.insert(arr);
            return;
        }
        for(int i=ind;i<=n;i++){
            swap(arr[ind],arr[i]);
            solve(ind+1,arr,n);
            swap(arr[ind],arr[i]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        sort(arr.begin(),arr.end());
        solve(0,arr,n-1);
        for(auto x:st){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends