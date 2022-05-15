class Solution {
public:
    bool isvalid(int i,int j,int m,int n)
    {
        if(i==m||j==n||j<0||i<0)
            return false;
        return true;
    }
    
    vector<vector<int>> dir={{1,0},{0,1},{0,-1},{-1,0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int,int>> q;
        
        vector<vector<int>> vis(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=0;
                }
            }
        }
        
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            for(auto &x: dir){
                int a = curr.first+x[0];
                int b = curr.second+x[1];
                
                if(isvalid(a,b,m,n) && vis[a][b]==-1)
                {
                    q.push({a,b});
                    vis[a][b] = vis[curr.first][curr.second]+1;
                }
            }
        }
        return vis;
    }
};