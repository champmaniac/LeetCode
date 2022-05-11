// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(vector<vector<int>> &m, int n, vector<string> &v, int i,int j, string s){
        if(i<0 || j<0 || i>=n || j>=n || m[i][j] == 0)
            return;
        if(i==n-1 && j==n-1){
            v.push_back(s);
            return;
        }
        m[i][j]=0;
        dfs(m,n,v,i+1,j,s+"D");
        dfs(m,n,v,i-1,j,s+"U");
        dfs(m,n,v,i,j+1,s+"R");
        dfs(m,n,v,i,j-1,s+"L");
        m[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> v;
        dfs(m,n,v,0,0,"");
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends