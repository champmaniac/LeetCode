// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    #define mod 1000000007;
public:
    vector<vector<long long>> multiply(vector<vector<long long>> mat1, vector<vector<long long>> mat2){
        vector<vector<long long>> ans(2,vector<long long>(2,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for (int k=0;k<2;k++)
                    ans[i][j]+=mat1[i][k]*mat2[k][j]%mod;
            }
        }
        return ans;
    }
    vector<vector<long long>> fbn(vector<vector<long long>> &a,int n){
        if (n==1){
            return a;
        }
        vector<vector<long long>> temp=fbn(a,n/2);
        if(n%2==0){
            return multiply(temp, temp);
        }
        return multiply(temp,multiply(temp,a)); 
    }

    int FindNthTerm(long long int n) {
        // Code here
        vector<vector<long long>>a={{1,1},{1,0}};
        vector<vector<long long>>ans=fbn(a,n+1);
        return ans[0][1]%mod;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int n;
		cin >> n;
		Solution obj;
		int ans = obj.FindNthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends