class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size()-1;
        int n = grid[0].size()-1;
        
        queue<vector<int>> q;
        
        if(grid[0][0] || grid[m][n]) return -1;
        
        q.push({0,0,1});
        vector<vector<int>> dir={{1,0},{-1,0},{0,-1},{0,1},{-1,-1},{1,-1},{-1,1},{1,1}};
        
        while(!q.empty()){
            vector<int> curCell = q.front();
            q.pop();
            if(curCell[0]==m && curCell[1]==n)
                return curCell[2];
            
            for(vector<int> move:dir){
                int x = curCell[0]+move[0];
                int y = curCell[1]+move[1];
                
                if(x>=0 && x<=m && y>=0 && y<=n && grid[x][y]==0){
                    grid[x][y]=1; // marking as visited in place
                    q.push({x,y,curCell[2]+1});
                }
            }
        }
        return -1;
    }
};