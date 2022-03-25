// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimize(vector<int> &a, vector<int> &b, vector<int> &c) {
        // Code here
        int diff = INT_MAX;
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int i, j, k;
        for(i = 0, j = 0, k = 0; i < a.size() && j < b.size() && k < c.size();) {
            minimum = min(a[i], min(b[j], c[k]));
            maximum = max(a[i], max(b[j], c[k]));
            diff = min(diff, maximum - minimum);
            if (diff == 0) break;
            if (a[i] == minimum) i++;
            else if (b[j] == minimum) j++;
            else k++;
        }
        return diff;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int x, y, z;
        cin >> x >> y >> z;
        vector<int>X(x), Y(y), Z(z);
        for(int i = 0; i < x; i++)cin >> X[i];
        for(int i = 0; i < y; i++)cin >> Y[i];
        for(int i = 0; i < z; i++)cin >> Z[i];
        Solution obj;
        int ans = obj.minimize(X, Y, Z);
        cout << ans << "\n";
    }
	
	return 0;
	
}

  // } Driver Code Ends