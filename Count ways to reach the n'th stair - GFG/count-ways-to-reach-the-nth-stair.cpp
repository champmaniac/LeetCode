// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int dp[10001];
    int inf = 1e9+7;
    int solve(int n){
        if(dp[n]!=-1) return dp[n];
        if(n ==1 || n==2) return dp[n] = n;
        return dp[n] = ((solve(n-1)%inf)+(solve(n-2)%inf))%inf;
    }
    int countWays(int n)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends