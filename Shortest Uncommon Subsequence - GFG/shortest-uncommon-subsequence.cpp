// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int shortestUnSub(string S, string T) {
        // code here
        int n = S.size(), m = T.size();
    vector <vector<int>> dp(n+1, vector<int>(m+1, 1000));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int k = j;
            while(k && S[i-1] != T[k-1])
                k -= 1;
            if(k == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = min(dp[i-1][j], 1+dp[i-1][k-1]);
        }
    }
    return dp[n][m] == 1000 ? -1 : dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        cin>>S>>T;

        Solution ob;
        cout << ob.shortestUnSub(S,T) << endl;
    }
    return 0;
}  // } Driver Code Ends