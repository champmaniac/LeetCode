// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int visited[100005];
    int dp[100005];
    int minColour(int n, int m, vector<int> mat[]) {
        vector<vector<int>> adj(n + 1);
        for(int i = 0; i < m; i++)
            adj[mat[i][0]].push_back(mat[i][1]);
        
        int mx = 0;
        memset(visited, 0, sizeof visited);
        memset(dp, -1, sizeof dp);
        
        for(int i = 1; i <= n; i++) {
            if(visited[i]) continue;
            
            int path_length = dfs(adj, i);
            mx = max(mx, path_length);
        }
        
        return mx;
    }
    
    int dfs(vector<vector<int>> &adj, int s) {
        visited[s] = 1;
        if(dp[s] != -1) return dp[s];
        
        int mx = 0;
        for(auto x : adj[s]) {
            if(not visited[x]) {
                int val = dfs(adj, x);
                mx = max(mx, val);
            }
            else
                mx = max(mx, dp[x]);
        }
        return dp[s] = mx + 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends