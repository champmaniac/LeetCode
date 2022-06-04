// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool Helper(string S, int start,int end){
	    while(start<end){
	        if(S[start++]!=S[end--]){
	            return false;
	        }
	    }
	    return true;
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.size()-1;
	    return Helper(S,0,n);
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
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends