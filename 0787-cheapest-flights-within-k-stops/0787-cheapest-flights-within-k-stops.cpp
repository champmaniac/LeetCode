class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<int>>adj[n];
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dist(n+1,1e9);
        dist[src]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            
            int stops = top.first;
            int node = top.second.first;
            int cost = top.second.second;
            
            for(auto it:adj[node]){
                int adjNode = it[0];
                int adjCost = it[1];
                
                if(cost+adjCost<dist[adjNode] && stops<=k){
                    dist[adjNode]=cost+adjCost;
                    q.push({stops+1,{adjNode,cost+adjCost}});
                }
            }
        }
        if(dist[dst]==1e9) return -1;
        else return dist[dst];
    }
};