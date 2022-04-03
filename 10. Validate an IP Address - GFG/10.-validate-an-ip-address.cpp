// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            string ans;
            int cnt=0;
            for(auto x:s){
                if(isalpha(x)) return 0;
                if(x!='.') ans.push_back(x);
                else if(x=='.'){
                    cnt++;
                    if(ans.empty() || ans.length()>3 || (ans.size()>1 && ans[0]=='0')) return 0;
                    int n = stoi(ans);
                    if(n>=0 && n<=255) ans.clear();
                }
            }
            
            if(ans.length()>3 || cnt!=3 || ans.size()>1 && ans[0]=='0') return 0;
            int n = stoi(ans);
            if(n>=0 && n<=255) return 1;
            return 0;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends