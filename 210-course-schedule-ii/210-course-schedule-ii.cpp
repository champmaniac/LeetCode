class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> degree(n,0);
        queue<int> q;
        for(auto &p:pre){
            adj[p[1]].push_back(p[0]);
            ++degree[p[0]];
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0){
                q.push(i);
            }
        }
        vector<int> res;
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            for(auto it:adj[top]){
                --degree[it];
                if(degree[it]==0){
                    q.push(it);
                }
            }
            res.push_back(top);
        }
        if(res.size()!=n) res.clear();
        return res;
    }
};