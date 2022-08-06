class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n+1,0);
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(auto it:adj[top]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
            if(vis[destination]) return true;
        }
        return vis[destination];
    }
};