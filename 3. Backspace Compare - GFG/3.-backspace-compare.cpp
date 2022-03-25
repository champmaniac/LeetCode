// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string getString(string &str) {
        int n=str.length(), count=0;
        string result="";
        for(int i=n-1; i>=0; i--) {
            char ch=str[i];
            if(ch=='#') 
                count++;
            else {
                if(count>0)
                    count--;
                else {
                    result+=ch;
                }                     
            }
        }
        return result;        
    }
    int backSpace(string S, string T){
        // code here 
        return getString(S)==getString(T);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.backSpace(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends