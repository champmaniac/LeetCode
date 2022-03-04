// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> rev;
        string temp="";
        for(auto a:S){
            if(a=='.'){
                rev.emplace_back(temp);
                rev.emplace_back(".");
                temp.clear();
            }
            else
                temp+=a;
        }
        
        for(int i=rev.size()-1;i>=0;--i){
            temp+=rev[i];
        }
        return temp;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends