// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getAngle(int H , int M) {
        // code here
        if(abs(H*30 - M*6 + M*6/12.0)>180)
            return 360-abs(H*30 - M*6 + M*6/12.0);
        else
            return abs(H*30 - M*6+M*6/12.0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}  // } Driver Code Ends