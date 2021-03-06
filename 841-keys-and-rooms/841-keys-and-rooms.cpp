class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            vis[top] = true;
            for(auto &node:rooms[top]){
                if(!vis[node]){
                    q.push(node);
                }
            }
        }
        for(auto x:vis){
            if(x==false) return false;
        }
        return true;
    }
};