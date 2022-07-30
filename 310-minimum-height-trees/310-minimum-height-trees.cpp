class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>res;
        if(n==1){
            res.push_back(0);
            return res;
        }
        res.clear();
        vector<vector<int>> adj(n);
        queue<int> q;
        vector<int> inDegree(n,0);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            ++inDegree[e[0]];
            ++inDegree[e[1]];
        }
        for(int i=0;i<n;i++){
            if(inDegree[i]==1)
                q.push(i);
        }
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto node = q.front();
                q.pop();
                res.emplace_back(node);
                for(auto &it:adj[node]){
                    --inDegree[it];
                    if(inDegree[it]==1)
                        q.push(it);
                }
            }
            if(!q.empty()) res.clear();
        }
        return res;
    }
};