class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> result(grid);
        int n = grid.size();
        int m = grid[0].size();
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                x = (m*i+j+k)/m%n;
                y = (m*i+j+k)%m;
                result[x][y] = grid[i][j];
            }
        }
        return result;
    }
};