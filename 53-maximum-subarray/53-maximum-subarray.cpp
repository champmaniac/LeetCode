class Solution {
public:
    int helper(int i, vector<int> &nums, bool mustPick,vector<vector<int>> &dp){
        int n = nums.size();
        // base
        if(i>=n) return mustPick?0:-1e5;
        if(dp[mustPick][i]!=-1) return dp[mustPick][i];
        if(mustPick)
            return dp[mustPick][i] = max(0,nums[i]+helper(i+1,nums,true,dp));
        return dp[mustPick][i] = max(helper(i+1,nums,false,dp),nums[i]+helper(i+1,nums,true,dp));
    }
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(2,vector<int> (n,-1));
        return helper(0,nums,false,dp);
    }
};