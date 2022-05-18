class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);
        vector<int> safeNodes;
        
        int i=0;
        for(auto &edges:graph){
            for(auto &edge:edges){
                adj[edge].push_back(i);
                indegree[i]++;
            }
            i++;
        }
        
        //topo sort
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);
            
            for(auto &edges:adj[node]){
                if(--indegree[edges]==0)q.push(edges);
            }
        }
        sort(begin(safeNodes),end(safeNodes));
        return safeNodes;
    }
};