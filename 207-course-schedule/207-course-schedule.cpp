class Solution {
public:
    bool isCycle(int ind, vector<int> &vis, vector<int> adj[]){
       if(vis[ind]==1) return true;
       if(!vis[ind]){
           vis[ind]=1;
           for(auto edge:adj[ind]){
               if(isCycle(edge,vis,adj)) return true;
           }
       }
       vis[ind]=2;
       return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto edges:prerequisites){
            adj[edges[1]].push_back(edges[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(isCycle(i,vis,adj)) return false;
        }
        return true;
    }
};