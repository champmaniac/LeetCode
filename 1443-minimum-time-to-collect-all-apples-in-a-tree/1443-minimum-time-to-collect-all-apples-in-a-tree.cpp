class Solution {
public:
    unordered_map<int,vector<int>>graph;
    unordered_map<int,bool>vis;
    void createGraph(vector<vector<int>>&edges){
        for(auto e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
    }
    int dfs(int node,int myCost,vector<bool>&hasApple){
        if(vis[node]) return 0;
        vis[node]=true;
        int childCost=0;
        for(auto it:graph[node]){
            childCost+=dfs(it,2,hasApple);
        }
        // if no child has apples then it's better not to go to that subtree so just return 0
        if(childCost==0 && hasApple[node]==false){
            return 0;
        }
        return (childCost+myCost);
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        createGraph(edges);
        return dfs(0,0,hasApple);
    }
};