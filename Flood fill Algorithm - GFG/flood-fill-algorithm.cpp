// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool isvalid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
        int oldColor = image[sr][sc];
        if(oldColor==newColor) return image; 
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc] = newColor;
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            
            for(auto move: dir){
                int x = top.first+move[0];
                int y = top.second+move[1];
                
                if(isvalid(x,y,m,n) && image[x][y]==oldColor){
                    q.push({x,y});
                    image[x][y] = newColor;
                }
            }
        }
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends