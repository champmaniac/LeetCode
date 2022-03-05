// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // s is the given string
    int SubsequenceLength (string s) 
    {
        // Your code goes here
        int freq[26]={0};
        int res=0;
        int n = s.size();
        int start =0,end=0;
        while(start<n){
            if(freq[s[start]-'a']==0)
                freq[s[start]-'a']++;
            else {
                freq[s[start]-'a']++;
                while(freq[s[start]-'a']>1){
                    freq[s[end]-'a']--;
                    end++;
                }
            }
            res=max(res,start-end+1);
            start++;
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution obj;
        cout<<obj.SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends