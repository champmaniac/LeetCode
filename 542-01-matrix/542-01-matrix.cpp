class Solution {
public:
    bool isvalid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,0)); // ans cum visited array
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
                else{
                    ans[i][j]=-1;
                }
            }
        }
        vector<vector<int>> dir ={{1,0},{0,1},{-1,0},{0,-1}};
        int level=0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                pair<int,int> p = q.front();
                q.pop();
                int r = p.first;
                int c = p.second;
                for(int i=0;i<4;i++){
                    int nr = r+dir[i][0];
                    int nc = c+dir[i][1];
                    
                    if(isvalid(nr,nc,m,n) && ans[nr][nc]==-1){
                        ans[nr][nc]=level+1;
                        q.push({nr,nc});
                    }
                }
            }
            level++;
        }
        return ans;
    }
};