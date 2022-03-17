// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int dp[1001][1001];
    int solve(string &word1, string &word2, int m, int n){
        if(n==0) return m;
        if(m==0) return n;
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        if(word1[m-1]==word2[n-1]){
            dp[m][n] = solve(word1,word2,m-1,n-1);
            return dp[m][n];
        }
        dp[m][n] = 1+min(solve(word1,word2,m,n-1),min(solve(word1,word2,m-1,n),solve(word1,word2,m-1,n-1)));
        return dp[m][n];
    }    
    int editDistance(string s, string t) {
        // Code here
        int m = s.size();
        int n = t.size();
        memset(dp,-1,sizeof(dp));
        return dp[m][n]= solve(s,t,m,n);
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends