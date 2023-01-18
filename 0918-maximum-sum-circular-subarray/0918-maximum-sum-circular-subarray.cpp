class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,maxSum=nums[0],curMax=0,minSum=nums[0],curMin=0;
        for(auto &it:nums){
            curMax=max(curMax+it,it);
            maxSum=max(maxSum,curMax);
            curMin=min(curMin+it,it);
            minSum=min(minSum,curMin);
            total+=it;
        }
        return maxSum>0?max(maxSum,total-minSum):maxSum;
    }
};