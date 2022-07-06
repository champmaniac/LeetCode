class Solution {
public:
//     int fib(int n) {
//         int dp[n+1];
//         return fibMemoized(n,dp);
//     }
    
//     int fibMemoized(int n ,int dp){
//         if(n<2)
//             return n;
//         if(dp[n]!=0)
//             return dp[n];
//         int fibn = fibMemoized(n-1,dp)+fibMemoized(n-2,dp);
//         dp[n]= fibn;
//         return fibn; 
//      }
    
        int fib(int n)
        {
            int dp[n+1];
            if(n<2)
                return n;
            dp[0]=0;
            dp[1]=1;
            for(int i=2;i<=n;i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
            return dp[n];
        }
};