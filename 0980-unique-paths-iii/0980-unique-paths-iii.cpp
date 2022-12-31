class Solution {
public:
    int dfs(vector<vector<int>>& g,int x,int y,int zero)
    {
        if(x<0 || x>g.size()-1 ||y<0||y>g[0].size()-1 or g[x][y]==-1) return 0;
        if(g[x][y]==2) return zero==-1;
        g[x][y]=-1; 
        zero--;
        int add=dfs(g,x+1,y,zero)+dfs(g,x-1,y,zero)+dfs(g,x,y+1,zero)+dfs(g,x,y-1,zero);
        zero--;
        g[x][y]=0;
        return add;
    }
    int uniquePathsIII(vector<vector<int>>& g) {
        int zero=0,x,y;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]==0)zero++;
                if(g[i][j]==1)
                    x=i,y=j;
            }
        }
        return dfs(g,x,y,zero);
    }
};