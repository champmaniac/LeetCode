class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
        vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
		int m=image.size();
        int n=image[0].size();
        int oldcolor=image[sr][sc];
        
        if(image[sr][sc]==newColor) return image;
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc] = newColor;
        
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            
            for(auto move:dir){
                int x = top.first + move[0];
                int y = top.second + move[1];
                
                if(isValid(x,y,m,n) && image[x][y]==oldcolor){
                    q.push({x,y});
                    image[x][y] = newColor;
                }
            }
        }
        return image;
    }
    
    bool isValid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
};