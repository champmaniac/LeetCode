class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        int dp[n];
        int ans=0;
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({ages[i],scores[i]});
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            dp[i]=arr[i].second;
            for(int j=0;j<i;j++){
                if(arr[j].second<=arr[i].second){
                    dp[i]=max(dp[i],dp[j]+arr[i].second);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};