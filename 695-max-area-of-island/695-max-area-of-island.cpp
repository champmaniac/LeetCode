class Solution {
public:
    int dfs(int i,int j,vector<vector<int>> &grid,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || !grid[i][j]) return 0;
        grid[i][j]=0;
        return 1+ dfs(i+1,j,grid,m,n)+dfs(i,j+1,grid,m,n)+dfs(i-1,j,grid,m,n)+dfs(i,j-1,grid,m,n);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans=max(ans,dfs(i,j,grid,m,n));
                }
            }
        }
        return ans;
    }
};