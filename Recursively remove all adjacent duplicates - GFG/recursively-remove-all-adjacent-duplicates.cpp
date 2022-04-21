// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        // code here
        while(1){
            int n = s.size(), i=0;
            string temp;
            while(i<n){
                int j =i;
                while(++j<n && s[i]==s[j]);
                if(j==i+1) temp+=s[i];
                i=j;
            }
            if(s.size()==temp.size()) break;
            s=temp;
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends