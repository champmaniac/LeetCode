// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    int rowMaxi(vector<vector<int>> arr, int n,int m){
        int i=0,j=m-1;
	    int ans=-1;
	    while(i>=0 && i<n && j>=0 &&j<m){
	        if(arr[i][j]==1) {
	            ans=i;
	            j--;
	        }
	        else if(arr[i][j]==0) i++;
	    }
	    return ans;
    }
	int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    // code here
	    return rowMaxi(arr,n,m);
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends