class Solution {
public:
    int solve(int i,vector<int> &nums, int sum,vector<unordered_map<int,int>> &mp){
        if(i==nums.size()){
            return sum ==0;
        }
        auto it = mp[i].find(sum);
        if(it!=mp[i].end()) return it->second;
        return mp[i][sum] = solve(i+1,nums,sum+nums[i],mp)+solve(i+1,nums,sum-nums[i],mp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<unordered_map<int,int>> mp(nums.size());
        return solve(0,nums,target,mp);
    }
};