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
            int vertex = pq.top().second;
            pq.pop();
            
            for(auto x: adj[vertex]){
                int next_pos = x.first;
                int next_dis = x.second;
                
                if(dist[vertex]+next_dis<dist[next_pos]){
                    dist[next_pos] = dist[vertex]+next_dis;
                    pq.push({dist[next_pos],next_pos});
                }
            }
        }
        int ans = *max_element(dist.begin()+1, dist.end());
        return ans==INT_MAX?-1: ans;
    }
};