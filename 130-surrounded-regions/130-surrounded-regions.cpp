class Solution {
public:
    bool isSafe(int i,int j,int m,int n){
        return (i>=0 && j>=0 && i<m && j<n);
    }
    bool isBorder(int i,int j,int m,int n){
        if(i==0 || j==0 || i==m-1 || j==n-1) return true;
        return false;
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        queue<pair<int,int>> q;
        vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && isBorder(i,j,m,n)){
                    board[i][j]='#';
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            for(int i=0;i<dir.size();i++){
                int x = p.first+dir[i].first;
                int y = p.second+dir[i].second;
                
                if(isSafe(x,y,m,n) && !isBorder(x,y,m,n) && board[x][y]=='O'){
                    board[x][y]='#';
                    q.push({x,y});
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='#')
                    board[i][j]='O';
            }
        }
    }
};