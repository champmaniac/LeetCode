class Solution {
public:
    bool isCycle(int node, vector<int> &vis, vector<int> adj[]){
        if(vis[node]==1) return true;
        if(!vis[node]){
            vis[node]=1;
            for(auto edges:adj[node]){
                if(isCycle(edges,vis,adj)) return true;
            }
        }
        vis[node]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto edges:prerequisites){
            adj[edges[1]].push_back(edges[0]);
        }
        vector<int> vis(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(isCycle(i,vis,adj))
                return false;
        }
        return true;
    }
};