class Solution {
public:
    void dfs(vector<vector<int>> &grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]) 
            return;
        
        grid[i][j]=1;
        
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++)                    // first and last column
            dfs(grid,i,0), dfs(grid,i,m-1);
        
        for(int j=0; j<m; j++)
            dfs(grid,0,j), dfs(grid,n-1,j);     // first and last row
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!grid[i][j]){ 
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};