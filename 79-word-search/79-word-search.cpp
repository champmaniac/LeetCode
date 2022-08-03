class Solution {
public:
    bool dfs(int i,int j,vector<vector<char>> &board,string &word,int ind,int m,int n){
        if(ind==word.size()) return true;
        
        if(i<0 || j<0 || i>=m || j>=n) return false;
        
        if(board[i][j]!=word[ind]) return false;
        board[i][j]='*';
        bool search = dfs(i+1,j,board,word,ind+1,m,n) || dfs(i,j+1,board,word,ind+1,m,n) || dfs(i-1,j,board,word,ind+1,m,n) || dfs(i,j-1,board,word,ind+1,m,n);
        board[i][j] = word[ind];
        return search;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(i,j,board,word,0,m,n))
                    return true;
            }
        }
        return false;
    }
};