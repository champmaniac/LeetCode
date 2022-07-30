class Solution {
public:
    bool isvalid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int,int>> q;
        
        int minutes=0,tot=0,count=0;
        if(grid.empty()) return 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int di[4] = {0,1,0,-1};
        int dj[4] = {1,0,-1,0};
        
        while(!q.empty()){
            int size=q.size();
            count+=size;
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int dx = x+di[i];
                    int dy = y+dj[i];
                    
                    if(isvalid(dx,dy,m,n) && grid[dx][dy]==1){
                        grid[dx][dy]=2;
                        q.push({dx,dy});
                    }
                }
            }
            if(!q.empty()) minutes++;
        }
        return count==tot?minutes:-1;
    }
};