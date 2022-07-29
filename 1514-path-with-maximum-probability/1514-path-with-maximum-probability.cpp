class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<unordered_map<int,double>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]][edges[i][1]]=succProb[i];
            adj[edges[i][1]][edges[i][0]]=succProb[i];
        }
        vector<double> prob(n,0.0);
        queue<int> q;
        q.push(start);
        prob[start]=1.0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto &it:adj[node]){
                int nextNode = it.first;
                double curProb = it.second;
                if(prob[node]*curProb>prob[nextNode]){
                    prob[nextNode] = prob[node]*curProb;
                    q.push(nextNode);
                }
            }
        }
        return prob[end];        
    }
};