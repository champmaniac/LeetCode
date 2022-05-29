// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>> &grid,int x,int y){
      grid[x][y] = '0';
      int dx[] = {0,0,1,-1,-1,1,-1,1};
      int dy[] = {1,-1,0,0,1,1,-1,-1};
      for(int i = 0; i < 8; i++)
      {
          int cx = x + dx[i];
          int cy = y + dy[i];
          if(cx >= 0 && cx < grid.size() && cy < grid[0].size() && cy >= 0 && grid[cx][cy] == '1')
          dfs(grid,cx,cy);
      }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int m = grid.size();
        int n = grid[0].size();
        int res=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    res++;
                }
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends