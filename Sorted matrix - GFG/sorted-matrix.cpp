// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int s=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=v[s];
                s++;
            }
        }
        return mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends