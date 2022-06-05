class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int i=0,a=1; // starting with 1 as a since the first +ve integer is 1
        while(i<n){
            if(nums[i]>0 && nums[i]<=n){
                if(mp.find(nums[i])==mp.end())
                    mp[nums[i]]++;
                while(mp.find(a)!=mp.end()){
                    a++;
                }
            }
            i++;
        }
        return a;
    }
};