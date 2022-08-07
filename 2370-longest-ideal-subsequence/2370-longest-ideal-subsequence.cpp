class Solution {
public:
    int helper(string &s,int i,int j,int &k,vector<vector<int>> &dp){
        if(i>=s.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take=0,notTake=0;
        if(j==0 || abs(s[i]-j)<=k){
            take = 1+helper(s,i+1,s[i],k,dp);
        }
        notTake = helper(s,i+1,j,k,dp);
        return dp[i][j] = max(take,notTake);
    }
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp (s.size()+1,vector<int>(150,-1));
        return helper(s,0,0,k,dp);
    }
};