class Solution {
public:
    int helper(vector<int> &nums,int i, int j, vector<vector<int>> &dp){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]=0;
        for(int k=i;k<j;k++){
            dp[i][j]=max(dp[i][j],helper(nums,i,k,dp)+helper(nums,k+1,j,dp)+nums[i-1]*nums[k]*nums[j]);
        }
        return dp[i][j];
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin()+0,1);
        nums.push_back(1);
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return helper(nums,1,n-1,dp);
    }
};