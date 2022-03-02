class Solution {
public:
    bool dfs(vector<vector<int>> &graph, int V, vector<int> &dp){
        if(dp[V]) return dp[V]==1;
        dp[V]=-1;
        for(auto it=graph[V].begin();it!=graph[V].end();it++){
            if(!dfs(graph,*it,dp)) return false;
        }
        dp[V]=1;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> res;
        vector<int> dp(V,0);
        
        for(int i=0;i<V;i++){
            if(dfs(graph,i,dp))
                res.push_back(i);
        }
        return res;
    }
};