class Solution {
public:
    double solve(int node,int parent,vector<vector<int>> &adj,int t,int target){
        int child = adj[node].size();
        if(t<0) return 0;
        if(node!=1) child--;
        if(node==target){
            if(child==0 && t>=0) return 1.0;
            else if(child!=0 && t==0) return 1.0;
            else return 0;
        }
        double ans=0.0;
        for(auto &next:adj[node]){
            if(next!=parent){
                ans+=(1.0/child)*solve(next,node,adj,t-1,target);
            }
        }
        return ans;
    }
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> adj(n+1);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        return solve(1,0,adj,t,target);
    }
};