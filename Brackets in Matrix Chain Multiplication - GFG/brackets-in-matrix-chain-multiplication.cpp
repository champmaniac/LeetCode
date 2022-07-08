// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string matrixChainOrder(int p[], int n){
        // code here
        long long dp[n][n];
        memset(dp, 0, sizeof(dp));
        vector<vector<string>> sp(n , vector<string> (n , ""));
        for(int g=0; g<n-1; g++){
            for(int i=0, j=g ; i < n-1 && j < n-1 ; i++ , j++ ){
                if(g == 0){
                    dp[i][j] = 0;
                    sp[i][j] = "";
                    sp[i][j].push_back('A' + i);
                    
                }
                else if(g == 1){
                    dp[i][j] = p[i] * p[j] * p[j+1];
                    string str = "(";
                    str.push_back(('A' + i));
                    str.push_back(('A' + j));
                    str.push_back(')');
                    sp[i][j] = str;
                }
                else{
                    dp[i][j] = 1e18;
                    for(int k= i; k<j; k++){
                        long long ope =dp[i][k] + dp[k+1][j]   + p[i]*p[k+1]*p[j+1];
                        if(ope < dp[i][j]){
                            dp[i][j] = ope;
                            sp[i][j] ="("  +sp[i][k]  + sp[k+1][j] + ")";
                            
                        }
                    }
                }
            }
        }
        
        
        // for(int i=0; i<n;i++){
        //     for(int j=0; j< n; j++){
        //         cout<<dp[i][j] <<"  ";
        //     }
        //     cout<<endl;
        // }
        //cout<<sp[0][n-2]<<endl;
        return sp[0][n-2];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends