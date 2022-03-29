// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int maxLen = -1;
        int start =0;
        int n = s.size();
        int l,r;
        for(int i=0;i<n;i++){
            l=i-1;
            r=i+1;
            
            while(r<n && s[r]==s[i]) r++;
            while(l>=0 && s[l]==s[i]) l--;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
            int len = r-l-1;
            if(maxLen<len){
                maxLen = len;
                start = l+1;
            }
        }
        return s.substr(start,maxLen);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends