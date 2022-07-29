class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> vis(m,vector<int> (n,-1));
        queue<pair<int,int>> q;
        
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            pair<int,int> top = q.front();
            q.pop();
            for(auto &it:dir){
                int x = top.first+it[0];
                int y = top.second+it[1];
                
                if(isValid(x,y,m,n) && vis[x][y]==-1){
                    q.push({x,y});
                    vis[x][y]=vis[top.first][top.second]+1;
                }
            }
        }
        return vis;
    }
};