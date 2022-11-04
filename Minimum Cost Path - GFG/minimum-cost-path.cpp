//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
        vector<vector<int>> dist(n+1,vector<int>(n+1,INT_MAX));
        vector<vector<int>> vis(n+1,vector<int>(n+1,0));
        int delrow[4] = {+1,0,-1,0};
        int delcol[4] = {0,+1,0,-1};
        dist[0][0]=grid[0][0];
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({grid[0][0],{0,0}});
        while(!pq.empty()){
            pair<int,pair<int,int>> it = pq.top();
            pq.pop();
            
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            for(int i=0;i<4;i++){
                int newRow = row+delrow[i];
                int newCol = col+delcol[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<n && !vis[newRow][newCol]){
                    vis[newRow][newCol]=1;
                    if(dis+grid[newRow][newCol]<dist[newRow][newCol]){
                        dist[newRow][newCol]=dis+grid[newRow][newCol];
                        pq.push({dist[newRow][newCol],{newRow,newCol}});
                    }
                }
            }
        }
        return dist[n-1][n-1];
    }
};

//{ Driver Code Starts.
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
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends