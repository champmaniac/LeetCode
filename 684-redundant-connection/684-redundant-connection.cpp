class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& E) {
        int n = E.size();
        vector<vector<int>> graph(n+1);
        vector<bool> vis(n+1);
        for(auto &e:E){
            fill(begin(vis), end(vis), false); 
            graph[e[0]].push_back(e[1]),graph[e[1]].push_back(e[0]);
            if(dfs(graph,vis,e[0])) return e;
        }
        return {};
    }
    
    bool dfs(vector<vector<int>> &graph, vector<bool> &vis,int cur,int par =-1)
    {
        if(vis[cur]) return true;
        vis[cur]=true;
        for(auto &child : graph[cur]){
            if(child!=par && dfs(graph,vis,child,cur)) return true;
        }
        return false;
    }
};