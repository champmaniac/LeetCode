class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=1;i<n;i++){
            int sum = nums[i]+nums[i-1];
            mp[sum]++;
            if(mp[sum]>1) return true;
        }
        return false;
    }
};