class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(105);
        for(auto t:times){
            adj[t[0]].push_back({t[1],t[2]});
        }
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto node = pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int nextPos = it.first;
                int nextDis = it.second;
                
                if(dist[node]+nextDis<dist[nextPos]){
                    dist[nextPos] = dist[node]+nextDis;
                    pq.push({dist[nextPos],nextPos});
                }
            }
        }
        int ans= *max_element(dist.begin()+1,dist.end());
        return ans==INT_MAX?-1: ans;
    }
};