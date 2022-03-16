// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Complete this function

class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long minimumNumberOfCoins(int coins[],int n,int amount)
    {
        // your code here
        int dp[n+1][amount+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                if(j==0) dp[i][j]= false;
                if(i==0) dp[i][j]= true;
            }
        }
        
        for(int i=1,j=1;j<amount+1;j++){
            if(j%coins[0]==0) dp[i][j] = j/coins[0];
            else dp[i][j] = INT_MAX-1;
        }
        
        for(int i=2;i<n+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j] = min(dp[i-1][j], 1+dp[i][j-coins[i-1]]);
                }
                else
                    dp[i][j]= dp[i-1][j];
            }
        }
        
        if(dp[n][amount]==INT_MAX-1) return -1;
        else return dp[n][amount];
    }
    
};

// { Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends