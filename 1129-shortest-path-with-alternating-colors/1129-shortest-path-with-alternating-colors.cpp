class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto edge: redEdges){
            graph[edge[0]].emplace_back(edge[1],0); // red edges denoted by 0
        }
        for(auto edge: blueEdges){
            graph[edge[0]].emplace_back(edge[1],1); // blue edges denoted by 1
        }
        vector<int>dist(n,-1);
        queue<vector<int>>q;
        q.emplace(vector<int>{0,0,-1});
        
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            
            dist[top[0]]=dist[top[0]]!=-1?dist[top[0]]:top[1];
            
            for(auto &adj:graph[top[0]]){
                if(top[2] != adj.second && adj.first!= -1) {
                    q.emplace(vector<int>{adj.first, top[1] + 1, adj.second});
                    adj.first = -1;
                }
            }
        }
        return dist;
    }
};