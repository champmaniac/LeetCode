class Solution {
public:
    vector<vector<int>> adj;
    vector<vector<int>> ans;
    vector<int> Id;
    vector<int> lowLink;
    vector<bool> vis;
    int time =0;
    
    void dfs(int node, int parent){
        Id[node]=lowLink[node]= time++;
        vis[node]= true;
        for(int &x:adj[node]){
            if(parent==x) continue;
            if(!vis[x]){
                dfs(x,node);
                lowLink[node]= min(lowLink[node],lowLink[x]);
                if(Id[node]<lowLink[x])
                    ans.push_back({node,x});
            }
            else
                lowLink[node] = min(lowLink[node],Id[x]);
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        vis.resize(n,false);
        lowLink.resize(n,0);
        Id.resize(n,0);
        for(auto &x:connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++)
            if(!vis[i])
                dfs(i,i);
        return ans;
    }
};