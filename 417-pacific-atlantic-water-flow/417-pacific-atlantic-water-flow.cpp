class Solution {
public:
    void dfs(vector<vector<int>>& heights, vector<vector<bool>> &vis,int i,int j){
        int m= heights.size(), n=heights[0].size();
        vis[i][j]=true;
        
        //up
        if (i-1 >= 0 && vis[i-1][j] != true && heights[i-1][j]>=heights[i][j])
            dfs(heights, vis, i-1, j);
        //down
        if (i+1 < m && vis[i+1][j] != true && heights[i+1][j]>=heights[i][j])
            dfs(heights, vis, i+1, j);
        //left
        if (j-1 >= 0 && vis[i][j-1] != true && heights[i][j-1]>=heights[i][j])
            dfs(heights, vis, i, j-1);
        //right
        if (j+1 <n && vis[i][j+1] != true && heights[i][j+1]>=heights[i][j])
            dfs(heights, vis, i, j+1);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m=heights[0].size();
        
        vector<vector<bool>> check1(n,vector<bool> (m,false));
        vector<vector<bool>> check2(n,vector<bool> (m,false));
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            dfs(heights,check1,i,0);
            dfs(heights,check2,i,m-1);
        }
        
        for(int j=0;j<m;j++){
            dfs(heights,check1,0,j);
            dfs(heights,check2,n-1,j);
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check1[i][j] && check2[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};