class Solution {
public:
    void dfs(vector<vector<int>> &rooms, vector<bool> &vis, int i){
        vis[i]=true;
        for(auto it:rooms[i]){
            if(!vis[it]) dfs(rooms,vis,it);
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n,0);
        dfs(rooms,vis,0);
        for(int i=0;i<n;i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};