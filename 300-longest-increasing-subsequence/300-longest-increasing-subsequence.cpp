class Solution {
public:
    int solve(int i,int j,vector<int> &nums,int n,vector<vector<int>> &dp){
        if(i==n) return 0;
        if(dp[i][j+1]!=-1) return dp[i][j+1];
        
        int pick=0;
        if(j==-1 || nums[i]>nums[j]){
            pick = 1+solve(i+1,i,nums,n,dp);
        }
        int notPick = solve(i+1,j,nums,n,dp);
        return dp[i][j+1] = max(pick,notPick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(0,-1,nums,n,dp);
    }
};