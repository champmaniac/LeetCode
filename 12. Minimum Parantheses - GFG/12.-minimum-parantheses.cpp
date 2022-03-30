// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{ // TC O(N) SC O(1)
  public:
	int MinParentheses(string S)
	{
	     int bal =0;
	     int ans=0;
	     for(int i=0;i<S.size();i++){
	         bal+=S[i]=='('?1:-1;
	         if(bal==-1){
	             ans+=1;
	             bal+=1;
	         }
	     }
	     return bal+ans;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        int ans = ob.MinParentheses(S);
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends