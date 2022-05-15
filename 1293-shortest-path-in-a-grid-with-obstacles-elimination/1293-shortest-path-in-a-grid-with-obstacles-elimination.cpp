class Solution {
public:
    int dx[4]= {1,0,-1,0};
    int dy[4]= {0,1,0,-1};
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, -1));
        
        queue<vector<int>> q;
        // x, y, currentLength, remaining k
        q.push({0,0,0,k});
        while(!q.empty()){
            int sz = q.size();
            while(sz-- >0){
                int x = q.front()[0];
                int y = q.front()[1];
                int step = q.front()[2];
                int newK = q.front()[3];
                
                q.pop();
                // reached the destination
                if(x==m-1 && y==n-1) return step;
                // boundary check
                if(x<0 || y<0 || x>=m || y>=n) continue;
                // the newK is less than what the k value that the visited array has already seen
                // i.e less superpower(newK) has come then just continue
                if(vis[x][y]!=-1 && vis[x][y]>=newK) continue;
                
                if(grid[x][y]==1){
                    if(newK>0)
                        newK--;
                    else
                        continue;
                }
                vis[x][y] = newK;
                for(int i=0;i<4;i++){
                    int x1 = x+dx[i];
                    int y1 = y+dy[i];
                    q.push({x1,y1,step+1,newK});
                }
            }
        }
        return -1;
    }
};