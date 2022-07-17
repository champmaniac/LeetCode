class Solution {
public:
    int DigiSum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int res=-1;
        sort(nums.begin(),nums.end());
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int digitSum = DigiSum(nums[i]);
            mp[digitSum].push_back(nums[i]);
        }
        for(auto iter:mp){
            if(iter.second.size()>1){
                int maxi = iter.second.size();
                res = max(res,iter.second[maxi-1]+iter.second[maxi-2]);
            }
        }
        return res;
    }    
};