class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adj;
        for(auto e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n,0);
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            if(cur==destination) return true;
            for(auto &node:adj[cur]){
                if(!vis[node]){
                    vis[node]=1;
                    q.push(node);
                }
            }
        }
        return false;
    }
};