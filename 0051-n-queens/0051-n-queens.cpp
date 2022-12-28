class Solution {
public:
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n,vector<int>&leftRow,vector<int>&leftDown,vector<int>&leftUp){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && leftDown[row+col]==0 && leftUp[n-1+col-row]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                leftDown[row+col]=1;
                leftUp[n-1+col-row]=1;
                solve(col+1,board,ans,n,leftRow,leftDown,leftUp);
                board[row][col]='.';
                leftRow[row]=0;
                leftDown[row+col]=0;
                leftUp[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftRow(n,0);
        vector<int>leftDown(2*n-1,0);
        vector<int>leftUp(2*n-1,0);
        solve(0,board,ans,n,leftRow,leftDown,leftUp);
        return ans;
    }
};