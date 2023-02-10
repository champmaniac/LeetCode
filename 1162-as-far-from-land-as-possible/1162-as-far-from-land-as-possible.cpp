// 0 --> water ... 1 --> land
class Solution {
public:
    bool isValid(vector<vector<int>> &grid, vector<vector<bool>> &vis, int x,int y){
        int m = grid.size();
        int n = grid[0].size();
        if((x>=0 && x<m)&&(y>=0 && y<n) && (!vis[x][y]) && grid[x][y]==0)
            return true;
        return false;
    }
    
    void helperBFS(vector<vector<int>> &grid, vector<vector<bool>> &vis,queue<pair<int,int>> &q){
        int m = grid.size();
        int n = grid[0].size();
        
        int level =0;
        // directions
        int dx[] = {1,0,-1,0};
        int dy[] = {0,-1,0,1};
        
        while(!q.empty()){
            int size =q.size();
            for(int i=0;i<size;i++){
                pair<int,int> temp=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x = temp.first+dx[i];
                    int y = temp.second+dy[i];
                    
                    if(isValid(grid,vis,x,y)){
                        q.push({x,y});
                        vis[x][y]=true;
                        
                        if(level==0)
                            grid[x][y]=1;
                        else
                            grid[x][y]=1+grid[temp.first][temp.second];
                    }
                }
            }
            level++;
        }
    }
    int maxDistance(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> vis(m);
        for(int i=0;i<m;i++){
            vis[i].resize(n,false);
        }
        
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        helperBFS(grid,vis,q);
        int ans=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>1)
                    ans=max(ans,grid[i][j]);
            }
        }
        
        return ans;
    }
};