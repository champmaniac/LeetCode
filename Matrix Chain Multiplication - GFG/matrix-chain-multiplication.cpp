// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[1001][1001];
    int solve(int arr[], int i, int j){
        if(i>=j) return 0;
        int mini = INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i;k<=j-1;k++){
            // calculate temp ans
            int costToMultiply = arr[i-1]*arr[k]*arr[j];
            int tempans = solve(arr,i,k)+solve(arr,k+1,j)+costToMultiply;
            mini = min(tempans,mini);
        }
        dp[i][j]= mini;
        return dp[i][j];
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans = solve(arr,1,n-1); 
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends