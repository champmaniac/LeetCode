class Solution {
public:
    // int helper(int i,vector<int>&nums,int n,vector<int>&dp){
    //     if(i>=n) return 0;
    //     if(dp[i]!=-1) return dp[i];
    //     int pick = nums[i]+helper(i+2,nums,n,dp);
    //     int notPick = helper(i+1,nums,n,dp);
    //     return dp[i] = max(notPick,pick);
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int pick = nums[i];
            if(i>1){
                pick +=dp[i-2];
            }
            int notPick = dp[i-1];
            dp[i] = max(notPick,pick);
        }
        return dp[n-1];
    }
};