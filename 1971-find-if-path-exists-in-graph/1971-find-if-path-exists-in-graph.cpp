class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adj;
        for(auto &e:edges){
            vector<int> temp=e;
            int u = temp[0];
            int v = temp[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int size = adj.size(); 
        vector<bool> vis(size+1,false);
        
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            vector<int> temp=adj[top];
            for(int i=0;i<temp.size();i++){
                int vertex = temp[i];
                if(vis[vertex]==false){
                    q.push(vertex);
                    vis[vertex]=true;
                }
            }
        }
        return vis[destination];
    }
};