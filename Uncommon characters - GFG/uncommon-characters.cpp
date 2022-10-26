//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string ans="";
            bool freq1[26];
            bool freq2[26];
            for(int i=0;i<26;i++){
                freq1[i]=false;
                freq2[i]=false;
            }
            for(auto &ch:A){
                freq1[ch-'a']=true;
            }
            for(auto &ch:B){
                freq2[ch-'a']=true;
            }
            for(int i=0;i<26;i++){
                if(freq1[i]^freq2[i]==true){
                    ans+='a'+i;
                }
            }
            if(ans=="") return "-1";
            return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends