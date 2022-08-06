class Solution {
public:
    //we basically need to count the number of disconnected components
    void dfs(int src,int n,vector<bool>&vis,vector<vector<int>>& isConnected){
        vis[src]=true;
        vector<int> adj;
        for(int i=0;i<n;i++){
            int x = isConnected[src][i];
            if(x==1) adj.push_back(i);
        }
        for(auto it:adj){
            if(!vis[it]){
                dfs(it,n,vis,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int count=0;
        int n = isConnected.size();
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,n,vis,isConnected);
            }
        }
        return count;
    }
};