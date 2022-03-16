class Solution {
public:
    int longestSubsequence(vector<int>& nums, int diff) {
        int n = nums.size(), ans =1;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = mp[nums[i]-diff]+1;
            ans= max(ans,mp[nums[i]]);
        }
        return ans;
    }
};