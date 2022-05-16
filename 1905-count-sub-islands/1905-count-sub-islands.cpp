class Solution {
    vector<vector<int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
public:
    bool isInside(int x,int y,int m,int n){
        if(x<0 || y<0 || x>=m || y>=n)
            return false;
        return true;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid2.size();
        int n = grid2[0].size();
        
        int countSubIsland=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1){
                    bool hasSubIsland = bfs(i,j,m,n,grid1,grid2);
                    countSubIsland+=hasSubIsland;
                }
            }
        }
        return countSubIsland;
    }
    
    bool bfs(int i,int j,int m,int n, vector<vector<int>> &grid1,vector<vector<int>> &grid2){
        queue<vector<int>> q;
        q.push({i,j});
        grid2[i][j]=0; // mark the cell
        bool hasSubIsland = true;
        
        while(!q.empty()){
            vector<int> cur = q.front();
            q.pop();
            if(grid1[cur[0]][cur[1]]!=1) hasSubIsland = false;
            
            for(vector<int> move: dir){
                int x = cur[0]+move[0];
                int y = cur[1]+move[1];
                
                if(isInside(x,y,m,n) && grid2[x][y]==1){
                    q.push({x,y});
                    grid2[x][y]=0;
                }
            }
        }
        return hasSubIsland;
    }
};