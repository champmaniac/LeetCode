// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int n, int v) 
	{ 
	    // Your code goes here
	    int dp[n+1][v+1];
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<v+1;j++){
	            if(j==0) dp[i][j]=0;
	            if(i==0) dp[i][j]=INT_MAX-1;
	        }
	    }
	    
	    for(int i=1,j=1;j<v+1;j++){
	        if(j%coins[0]==0) dp[i][j] = j/coins[0];
	        else dp[i][j] = INT_MAX-1;
	    }
	    
	    for(int i=2;i<n+1;i++){
	        for(int j=1;j<v+1;j++){
	            if(coins[i-1]<=j){
	                dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
	            }
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    
	    if(dp[n][v]==INT_MAX-1) return -1;
	    return dp[n][v];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends