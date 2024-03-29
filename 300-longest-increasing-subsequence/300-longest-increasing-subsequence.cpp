class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,1);
        if(dp[n]!=1) return dp[n];
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            maxi = max(maxi,dp[i]);
        }
        return dp[n]=maxi;
    }
};