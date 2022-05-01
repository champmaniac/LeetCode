// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int superPrimes(int n)
	{
	    // Your code goes here
	    int N = n+2;
	    vector<bool> is_Prime(N,true);
	    is_Prime[0]=is_Prime[1]=false;
	    for(int i=2;i<N;i++){
	        if(is_Prime[i]){
	            for(int j=2*i;j<N;j+=i){
	                is_Prime[j]=false;
	            }
	        }
	    }
	    int ans=0;
	    for(int i=2;i<=n;i++){
	        if(is_Prime[i] && is_Prime[i-2])ans++;
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends