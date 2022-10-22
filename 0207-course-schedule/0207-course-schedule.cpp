class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        queue<int> q;
        for(auto it:pre){
            adj[it[1]].push_back(it[0]);
            ++indegree[it[0]];
        }
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) q.push(i);
        }
        int count=0;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            ++count;
            for(auto it:adj[node]){
                --indegree[it];
                if(indegree[it]==0) q.push(it);
            }
        }
        return count==n;
    }
};