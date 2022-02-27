// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isPrime(int n){
        if(n==1 || n==0) return false;
        int i;
        for(i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    } 
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> res;
        int i;
        for(i=M;i<=N;i++){
            if(isPrime(i)) res.push_back(i);
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends