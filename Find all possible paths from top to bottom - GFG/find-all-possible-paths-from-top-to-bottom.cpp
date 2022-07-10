// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> ans;
    void helper(int i, int j,int n,int m,vector<vector<int>> &grid,vector<int> temp){
        // base
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(i==n-1 && j==m-1){
            temp.push_back(grid[i][j]);
            ans.push_back(temp);
            return;
        }
        temp.push_back(grid[i][j]);
        // move left
        helper(i+1,j,n,m,grid,temp);
        // move up
        helper(i,j+1,n,m,grid,temp);
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<int> temp;
        helper(0,0,n,m,grid,temp);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends