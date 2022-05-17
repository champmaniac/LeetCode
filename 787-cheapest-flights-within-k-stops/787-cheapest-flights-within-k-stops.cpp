class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n,INT_MAX);
        vector<vector<pair<int,int>>> adj(n);
        for(auto t:flights){
            adj[t[0]].push_back({t[1],t[2]});
        }
        int ans = INT_MAX;
        int level=0;
        queue<pair<int,int>> q;
        dist[src]=0;
        q.push({src,0});
        while(!q.empty() && level<=k){
            int sz =q.size();
            while(sz-- >0){
                int curNode = q.front().first;
                int curDis = q.front().second;
                q.pop();
                if(curDis>dist[curNode]) continue;
                dist[curNode]= curDis;
                for(auto adjEdge:adj[curNode]){
                    if(curDis+adjEdge.second>ans) continue;
                    if(adjEdge.first==dst)ans = min(ans,curDis+adjEdge.second);
                    q.push({adjEdge.first,adjEdge.second+curDis});
                }
            }
            level++;
        }
        return ans==INT_MAX?-1:ans;
    }
};