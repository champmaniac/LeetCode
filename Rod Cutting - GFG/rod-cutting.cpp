// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int dp[1001][1001];
    int solve(int price[], int n,int i){
        if(n<=0 || i>=n) return 0;
        if(dp[n][i]!=-1) return dp[n][i];
        return dp[n][i]=max(price[i]+solve(price,n-(i+1),0), solve(price,n,i+1));
    }
    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        return solve(price,n,0);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends