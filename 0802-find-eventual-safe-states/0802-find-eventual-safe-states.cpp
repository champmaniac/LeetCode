class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int> adjRev[n+1];
        queue<int>q;
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int>safeNodes;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            for(auto it:adjRev[node]){
                if(--indegree[it]==0) q.push(it);
            }
            safeNodes.push_back(node);
        }
        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;
    }
};