class Solution {
public:
    vector<int> dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&ans,string &labels){
        vis[node]=1;
        vector<int>cnt(26,0);
        cnt[labels[node]-'a']++;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                vector<int>temp=dfs(it,adj,vis,ans,labels);
                for(int i=0;i<26;i++) cnt[i]+=temp[i];
            }
        }
        ans[node]=cnt[labels[node]-'a'];
        return cnt;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int>adj[n];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1,0);
        vector<int>ans(n,0);
        dfs(0,adj,vis,ans,labels);
        return ans;
    }
};