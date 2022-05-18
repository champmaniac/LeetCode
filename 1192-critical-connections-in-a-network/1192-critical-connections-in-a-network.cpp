class Solution {
public:
    vector<vector<int>> adj;
    vector<vector<int>> ans;
    vector<int> firstTime, minTime, visited;
    
    int time = 1;
    void dfs(int node, int parent = -1){
        firstTime[node] = minTime[node] = time++;
        visited[node]=true;
        
        for(auto &child:adj[node]){
            if(parent==child) continue;
            if(!visited[child]){
                dfs(child,node);
            }
            minTime[node] = min(minTime[child],minTime[node]);
            if(firstTime[node]<minTime[child])
                ans.push_back({node,child});
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        firstTime.resize(n), minTime.resize(n), visited.resize(n), adj.resize(n);
        for(auto &e: connections){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i=0;i<n;i++){
            if(!visited[i])
                dfs(i);
        }
        return ans;
    }
};