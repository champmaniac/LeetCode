class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n) return;
        // 2 --> visiting  again
        // 0 --> water
        if(grid[i][j]=='2' || grid[i][j]=='0') return;
        grid[i][j]='2'; // visiting
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int islands =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,m,n);
                    ++islands;
                }
            }
        }
        return islands;
    }
};