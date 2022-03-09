// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{      // Recursive + Memoization
public:
    int dp[101][10001];
    bool solve(int arr[], int sum, int n){
        if(sum==0) return true;
        if(n==0) return false;
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(arr[n-1]<=sum){
            dp[n][sum]=solve(arr,sum-arr[n-1],n-1) || solve(arr,sum,n-1);
        }
        else
            dp[n][sum] = solve(arr,sum,n-1);
        return dp[n][sum];
    }
    bool isSubsetSum(int n,int arr[], int sum){
        memset(dp,-1,sizeof(dp));
        return solve(arr,sum,n);
    }
};
// class Solution{   
// public:
//     bool isSubsetSum(int n, int arr[], int sum){
//         // code here 
//         bool dp[n+1][sum+1];
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(i==0)
//                     dp[i][j]=false;
//                 if(j==0) 
//                     dp[i][j]=true;
//             }
//         }
        
//         for(int i=1;i<n+1;i++)
//         {
//             for(int j=1;j<sum+1;j++){
//                 if(arr[i-1]<=j){
//                     dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
//                 }
//                 else if(arr[i-1]>j)
//                 {
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
//         return dp[n][sum];
//     }
// };

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends