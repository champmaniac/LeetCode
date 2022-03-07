class Solution {
public:
    bool helper(int ind, int target, vector<int> &arr ,vector<vector<int>> &dp){
    if(target ==0) return true;
    if(ind ==0) return (arr[0]==target);
    
    if(dp[ind][target]!=-1) return dp[ind][target];
    
    bool notTake = helper(ind-1,target,arr,dp);
    bool take = false;
    if(arr[ind]<=target){
        take = helper(ind-1,target-arr[ind],arr,dp);
    }
    return dp[ind][target]= take || notTake;
}
    bool canPartition(vector<int>& arr) {
        int n = arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0) return false;
        int target = sum/2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(n-1,target,arr,dp);
    }
};