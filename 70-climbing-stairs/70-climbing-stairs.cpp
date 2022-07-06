class Solution {
public:
    int helper(int i,int n,vector<int> &dp){
        if(i==n) return 1;
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = helper(i+1,n,dp) + helper(i+2,n,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(46,-1);
        return helper(0,n,dp);
    }
};