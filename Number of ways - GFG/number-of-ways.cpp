// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int arrangeTiles(int N){
        // code here
        if(N <= 3) return 1;
        long a = 0, b = 1, c = 1, d = 1;
        for(int i = 4; i <= N + 1; i++) {
            long e = a + d;
            a = b;
            b = c;
            c = d;
            d = e;
        }
        return d;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.arrangeTiles(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends