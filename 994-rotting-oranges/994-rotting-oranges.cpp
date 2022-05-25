class Solution {
public:
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    bool isvalid(int x,int y,int m,int n){
        if(x<0 || x>=m || y<0 || y>=n) return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n =grid[0].size();
        queue<pair<int,int>> rotten;
        int mini=0,tot=0,cnt=0;
        if(grid.empty()) return 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        
        while(!rotten.empty()){
            int sz = rotten.size();
            cnt+=sz;
            while(sz--){
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i=0;i<4;i++){
                    int x1 = x+dx[i];
                    int y1 = y+dy[i];
                    if(!isvalid(x1,y1,m,n) || grid[x1][y1]!=1) continue;
                    grid[x1][y1]=2;
                    rotten.push({x1,y1});
                }
            }
            if(!rotten.empty()) mini++;
        }
        return tot==cnt?mini:-1;
    }
};