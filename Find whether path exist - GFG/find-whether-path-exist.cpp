// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool helper(vector<vector<int>> &grid, int i,int j,vector<vector<bool>> vis){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j] || grid[i][j]==0) return false;
        
        if(grid[i][j]==2) return true;
        vis[i][j]=true;
        
        if(helper(grid,i,j-1,vis)|| helper(grid,i-1,j,vis) || helper(grid,i,j+1,vis) || helper(grid,i+1,j,vis)) return true;
        else
            return false;
    } 
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int r= grid.size();
        int c = grid[0].size();
        vector<vector<bool>> vis(r,vector<bool>(c,false));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)
                    return helper(grid,i,j,vis);
            }
        }
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends