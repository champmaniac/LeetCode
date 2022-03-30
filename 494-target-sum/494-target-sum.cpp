class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<unordered_map<int,int>> dp(nums.size());
        return solve(0,nums,target,dp);
    }
    int solve(int ind, vector<int> &nums, int target,vector<unordered_map<int,int>> &dp){
        if(ind==nums.size()) return target==0;
        auto it = dp[ind].find(target);
        if(it!=dp[ind].end()) return it->second;
        return dp[ind][target] = solve(ind+1,nums,target+nums[ind],dp)+solve(ind+1,nums,target-nums[ind],dp);
    }
};