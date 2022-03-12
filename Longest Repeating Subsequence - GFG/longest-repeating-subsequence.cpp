// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string s1 = str;
		    string s2 = str;
		    
		    int m = s1.size(), n= s2.size();
		    int dp[m+1][n+1];
		    
		    // LCS length
		    
		    for(int i=0;i<m+1;i++){
		        for(int j=0;j<n+1;j++){
		            if(i==0 || j==0) dp[i][j]=0;
		            else{
		                if(s1[i-1]==s2[j-1] && i!=j){
		                    dp[i][j] = 1+dp[i-1][j-1];
		                }
		                else
		                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		            }
		        }
		    }
		    
		    return dp[m][n];
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends