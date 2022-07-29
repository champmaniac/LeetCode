class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> inDegree(n,0);
        queue<int> q;
        for(auto &p:pre){
            adj[p[1]].push_back(p[0]);
            ++inDegree[p[0]];
        }
        for(int i=0;i<inDegree.size();i++){
            if(inDegree[i]==0)
                q.push(i);
        }
        int count=0;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            ++count;
            for(auto &it:adj[node]){
                --inDegree[it];
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        return count==n;
    }
};