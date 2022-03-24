// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    // int totalJewels(string J, string S) {              TC O(N^2)
    //     int cnt=0;
    //     for(char c1:J){
    //         for(char c2:S){
    //             if(c1==c2) cnt++;
    //         }
    //     }
    //     return cnt;
    // }
    int totalJewels(string J, string S) {                //TC O(J+S)
        int cnt=0;
        unordered_set<char> setJ(J.begin(),J.end());
        for(char c:S){
            if(setJ.count(c)) cnt++;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string J;
        cin >> J;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.totalJewels(J, S) << endl;
    }
    return 0;
}  // } Driver Code Ends