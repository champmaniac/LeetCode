// { Driver Code Starts
// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{
    public:
    //Function to return nCr mod 10^9+7 for given n and r. 
    int mod = 1e9+7;
    int ncp(int n, int r, vector<vector<int>> &dp){
        if(dp[n][r]!=-1) return dp[n][r];
        
        else if(r>n) return dp[n][r]=0;
        
        if(r==0) return dp[n][r]=1;
        if(n==r) return dp[n][r]=1;
        
        return dp[n][r] = (ncp(n-1,r,dp)+ncp(n-1,r-1,dp))%mod;
    }
    int nCrModp(int n, int r) 
    { 
      
      // your code here
      vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
      return ncp(n,r,dp);
      
    } 
};

// { Driver Code Starts.
// Driver program 
int main() 
{ 
  int t, n, r;
  
  //taking count of testcases
  cin >> t;
  
  while(t--){
      
      //taking n and r
      cin >> n >> r;
      Solution ob;
      //calling method nCrModp()
      cout << ob.nCrModp(n, r) << endl;
  }
  
  return 0; 
}
  // } Driver Code Ends