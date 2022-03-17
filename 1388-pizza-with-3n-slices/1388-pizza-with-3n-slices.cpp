class Solution {
private:
    int maxSizeSlices(const vector<int> &slices, int l){
        int n = slices.size();
        vector<vector<int>> dp(n+1,vector<int> (n/3+1,0));
        
        for(int i=2;i<n+1;i++){
            for(int j=1;j<=n/3;j++){
                dp[i][j] = max(dp[i-1][j], dp[i-2][j-1]+slices[i-1-!l]);
            }
        }
        return dp[n][n/3];
    }
public:
    int maxSizeSlices(vector<int>& slices) {
        return max(maxSizeSlices(slices,0),maxSizeSlices(slices,1));
    }
};