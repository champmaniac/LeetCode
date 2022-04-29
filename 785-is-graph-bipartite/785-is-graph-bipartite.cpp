class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &color, int src){
	for(auto it:graph[src]){
		if(color[it]==color[src])
			return false;
		else if(color[it]==0){
			color[it]=-color[src];
			if(!dfs(graph,color,it))
				return false;
		}
	}
	return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> color(v,0);
        for(int i=0;i<v;i++){
            if(color[i]==0){
                color[i]=-1;
                if(!dfs(graph,color,i))
                    return false;
            }
        }
        return true;
    }
};