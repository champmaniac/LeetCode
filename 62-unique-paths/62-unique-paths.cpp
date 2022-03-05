// class Solution { // TC O(2^m*n) SC O(2^m*n) // Recursion
// public:
//     int uniquePaths(int m, int n,int i=0,int j=0) {
//         if(i>=m || j>=n) return 0;
//         if(i==m-1 || j==n-1) return 1;
//         return uniquePaths(m,n,i+1,j)+uniquePaths(m,n,i,j+1);
//     }
// };

class Solution { // TC O(m*n) SC O(m*n) // Dp Memoization
public:
    int dfs(vector<vector<int>> &dp, int i, int j){
        if(i>=size(dp) || j>=size(dp[0])) return 0;
        if(i==size(dp)-1 && j==size(dp[0])-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = dfs(dp,i+1,j)+dfs(dp,i,j+1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n));
        return dfs(dp,0,0);
    }
};