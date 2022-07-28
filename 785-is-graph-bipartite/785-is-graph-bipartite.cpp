class Solution {
public:
    bool dfsCheck(int node,vector<int> &color, vector<vector<int>> &graph){
        for(auto it:graph[node]){
            if(color[it]==-1){
                color[it] = 1-color[node];
                if(!dfsCheck(it,color,graph))
                    return false;
            }
            else if(color[node]==color[it]) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n+1,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!dfsCheck(i,color,graph))
                    return false;
            }
        }
        return true;
    }
};