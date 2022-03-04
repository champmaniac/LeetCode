// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.size();
        if(n==0 || n==1) return 0;
        int dp[1001][1001] ={0};
        string s1 = S;
        reverse(s1.begin(),s1.end());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]==s1[j-1]) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][n];
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends