// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[2][201][201];
    int mod = 1003;
    int solve(string s, int i , int j , bool isTrue){
        if(i>j) return false;
        if(i==j){
            if(isTrue == true) return s[i]=='T';
            else return s[i] == 'F';
        }
        
        if(dp[isTrue][i][j]>-1) return dp[isTrue][i][j];
        
        int ans=0;
        for(int k=i+1;k<j;k+=2){
            int LT= solve(s,i,k-1,true);
            int LF= solve(s,i,k-1,false);
            int RT= solve(s,k+1,j,true); 
            int RF= solve(s,k+1,j,false);
            
            if(s[k]=='&'){
                if(isTrue==true) ans = ((ans%mod)+(LT*RT)%mod)%mod;
                else ans = ((ans%mod)+(LT*RF)%mod+(LF*RT)%mod+(LF*RF))%mod;
            }
            else if(s[k]=='|'){
                if(isTrue==true) 
                    ans = ((ans%mod)+(LT*RT)%mod +(LF*RT)%mod + (LT*RF))%mod;
                else ans = ((ans%mod)+(LF*RF));
            }
            else{
               if(isTrue == true) ans = ((ans % mod) + (LT*RF)% mod + (LF*RT))% mod;
               else ans = ((ans % mod) + (LT*RT)% mod + (LF*RF))% mod;
            }
        }
        dp[isTrue][i][j] = ans%mod;
            return ans;
    }
    int countWays(int N, string S){
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(S,0,N-1,true);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends