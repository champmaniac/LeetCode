class Solution {
public:
    void dfs(int node,vector<bool> &vis,vector<vector<int>> &adj){
        vis[node]=1;
        for(auto links:adj[node]){
            if(!vis[links]){
                dfs(links,vis,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        vector<vector<int>> adj(n);
        for(auto links:connections){
            adj[links[0]].push_back(links[1]);
            adj[links[1]].push_back(links[0]);
        }
        vector<bool> vis(n,0);
        int miniOps=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                miniOps++;
            }
        }
        return miniOps-1;
    }
};