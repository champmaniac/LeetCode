class Solution {
public:
    int helper(int p, vector<int> &nums,int target){
        int n = nums.size();
        if(p==n) return target==0;
        return helper(p+1,nums,target+nums[p])+helper(p+1,nums,target-nums[p]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(0,nums,target);
    }
};