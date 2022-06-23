// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    vector<vector<long long>> dp(N+1,vector<long long>(2,0));
	    dp[0][0]=1;
	    dp[0][1]=1;
        long long mod = 1000000007;
        for(int i=1;i<=N;i++){
            dp[i][0] = (dp[i-1][0] + dp[i-1][1])%mod;
            dp[i][1] = dp[i-1][0];
        }
        return (dp[N][0]*dp[N][0])%mod;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends