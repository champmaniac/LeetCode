class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                bool flag = true;
                for(int k=0;k<n&&flag;k++) {
                    if(grid[i][k] != grid[k][j]) flag = false;
                }
                if(flag) ans++;
            }
        }
        
        return ans;
    }
};