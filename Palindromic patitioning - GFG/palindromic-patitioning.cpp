// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[1001][1001];
    bool isPalindrome(string &s, int i , int j){
       while(i<=j){
           if(s[i]==s[j]){
               i++;
               j--;
           }
           else{
               return false;
           }
       }
       return true;
   }
    int solve(string &str,int i, int j){
        if(i>=j) return dp[i][j]= 0;
        
        if(isPalindrome(str,i,j)){
            return dp[i][j]= 0;
        }
        int ans = INT_MAX;
        int left,right;
        if(dp[i][j]!=-1) return dp[i][j];
        else{
            for(int k=i;k<=j-1;k++){
                if(dp[i][k]!=-1)
                    left = dp[i][k];
                else{
                    left =solve(str,i,k);
                    dp[i][k]=left;
                }
                if(dp[k+1][j]!=-1)
                    right=dp[k+1][j];
                else{
                    right = solve(str,k+1,j);
                    dp[k+1][j]=right;
                }
                int tans = 1+left+right;
                ans = min(ans,tans);
            }
        }
        return ans;
    }
    
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int n = str.size();
        return solve(str,0,n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends