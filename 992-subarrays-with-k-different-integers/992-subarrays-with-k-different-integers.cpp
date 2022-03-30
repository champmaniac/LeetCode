class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums,k) - atMostK(nums,k-1);
    }
    int atMostK(vector<int> &nums, int k){
        int i=0,res=0;
        unordered_map<int,int> mp;
        for(int j=0;j<nums.size();j++){
            if(!mp[nums[j]]++) --k;
            while(k<0)
            {
                if(!--mp[nums[i]]) k++;
                i++;
            }
            res+=j-i+1;
        }
        return res;
    }
};