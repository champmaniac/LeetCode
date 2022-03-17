class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        
        for(auto &str:strs){
            int zeros = count(str.begin(),str.end(),'0');
            int ones = size(str)-zeros;
            
            for(int i=m;i>=zeros;i--){
                for(int j=n;j>=ones;j--){
                    dp[i][j] = max(dp[i][j], dp[i-zeros][j-ones]+1);
                }
            }
        }
        
        return dp[m][n];
    }
};