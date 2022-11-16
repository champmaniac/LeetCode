class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int>q;
        q.push(0);
        vector<bool>vis(n,false);
        vis[0]=1;
        while(!q.empty()){
            auto room = q.front();
            q.pop();
            
            for(auto key:rooms[room]){
                if(!vis[key]){
                    vis[key]=1;
                    q.push(key);
                }
            }
        }
        for(auto v:vis){
            if(v==0) return false;
        }
        return true;
    }
};