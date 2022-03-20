class Solution {
public:
    int dp[20001];
    int solve(vector<int> &arr,int i){
        if(i>=arr.size()) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int currSum=arr[i];
        int currVal = arr[i];
        int index = i+1;
        while(index<arr.size() && arr[index]==currVal){
            currSum+= arr[i];
            index++;
        }
        
        while(index<arr.size() && arr[index]==currVal+1)
            index++;
        return dp[i]= max(currSum+solve(arr,index), solve(arr,i+1));
    }
    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return solve(nums,0);
    }
};