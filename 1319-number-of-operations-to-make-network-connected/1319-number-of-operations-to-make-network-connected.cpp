class Solution {
public:
    void dfs(int src,vector<int> adj[], vector<int> &vis){
        vis[src]=1;
        for(auto m:adj[src]){
            if(!vis[m]){
                dfs(m,adj,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        int m = edges.size(); // connections = edges
        if(m<n-1) return -1;
        for(int i=0;i<m;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> vis(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(i,adj,vis);
            }
        }
        return c-1;
    }
};