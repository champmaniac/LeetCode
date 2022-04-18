// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long karyTree(int k, int m) {
        // code here
        long long mod = 1e9+7;
        long long int leaf = 1;
        k%=mod;
        while(m){
            if(m&1) leaf = ((leaf%mod)*(k%mod))%mod;
            k = ((k%mod)*(k%mod))%mod;
            m>>=1;
        }
        return leaf;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends