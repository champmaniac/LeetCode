class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minSoFar=nums[0], maxSoFar=nums[0],maxProd=nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0) swap(maxSoFar,minSoFar);
            maxSoFar = max(nums[i],nums[i]*maxSoFar);
            minSoFar = min(nums[i],nums[i]*minSoFar);
            maxProd = max(maxProd,maxSoFar);
        }
        return maxProd;
    }
};