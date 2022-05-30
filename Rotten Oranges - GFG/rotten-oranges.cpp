// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    bool isvalid(int x,int y,int n, int m){
        if(x<0 || x>=n || y<0 || y>=m) return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n =grid.size();
        int m = grid[0].size();
        if(grid.empty()) return 0;
        queue<pair<int,int>> rotten;
        int mini=0,tot=0,cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        while(!rotten.empty()){
            int sz =rotten.size();
            cnt+=sz;
            while(sz--){
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();
                for(int i=0;i<4;i++){
                    int nx = x+dx[i];
                    int ny = y+dy[i];
                    
                    if(!isvalid(nx,ny,n,m) || grid[nx][ny]!=1) continue;
                    grid[nx][ny] =2;
                    rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()) mini++;
        }
        return tot==cnt?mini:-1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends