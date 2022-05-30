// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool isvalid(int x,int y,int n,int m){
        if(x>=0 && x<n && y>=0 && y<m) return true;
        return false;
    }
    int dfs(int i,int j,vector<vector<int>> &mat, vector<vector<int>> &dp){
        int n = mat.size();
        int m = mat[0].size();
        int ans =1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        vector<vector<int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
        
        for(int k=0;k<4;k++){
            int x = i+dir[k][0];
            int y = j+dir[k][1];
            
            if(isvalid(x,y,n,m)){
                if(mat[i][j]<mat[x][y]) ans = max(ans,1+dfs(x,y,mat,dp));
            }
        }
        return dp[i][j]=ans;
    } 
    int longestIncreasingPath(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        
        int ans=0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = max(ans,dfs(i,j,mat,dp));
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends