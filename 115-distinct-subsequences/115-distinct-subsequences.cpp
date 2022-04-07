class Solution {
public:
    int helper(string& s, string& t, int indS, int indT, const int& n, const int& m,vector<vector<int>> &dp){
        if(indT==m) return 1;
        if(indS==n) return 0;
        
        if(dp[indS][indT]!=-1) return dp[indS][indT];
        
        if(s[indS]==t[indT]){
            return dp[indS][indT]=helper(s,t,indS+1,indT+1,n,m,dp)+helper(s,t,indS+1,indT,n,m,dp);
        }
        return dp[indS][indT]=helper(s,t,indS+1,indT,n,m,dp);
    }
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return helper(s,t,0,0,n,m,dp);
    }
};