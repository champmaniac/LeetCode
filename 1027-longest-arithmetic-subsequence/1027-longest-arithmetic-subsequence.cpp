class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size(), ans =0;
        
        vector<unordered_map<int,int>> dp(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int diff = nums[j]-nums[i];
                dp[i][diff] = dp[j].count(diff)>0?dp[j][diff]+1:2;
                ans = max(dp[i][diff],ans);
            }
        }
        return ans;
    }
};