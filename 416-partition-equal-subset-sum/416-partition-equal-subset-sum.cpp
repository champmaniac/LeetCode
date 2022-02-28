class Solution {
public:
    bool SubsetSum(vector<int>& nums,int n,int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=sum;i++){
            dp[0][i]=false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        return SubsetSum(nums,n,sum=sum/2);
    }
};