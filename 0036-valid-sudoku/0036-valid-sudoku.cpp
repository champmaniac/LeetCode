class Solution {
public:
    bool valid(int i,int j,vector<vector<char>>& board){
        unordered_set<char> temp;
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                if(board[x][y]!='.' and temp.count(board[x][y]))
                    return false;
                temp.insert(board[x][y]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3)
                if(!valid(i,j,board))
                    return false;
        }
        unordered_set<char> temp;
        for(int i=0;i<9;i++){
            temp.clear();
            for(int j=0;j<9;j++){
                if(board[i][j]!='.' and temp.count(board[i][j]))
                    return false;
                temp.insert(board[i][j]);
            }
        }
        for(int j=0;j<9;j++){
            temp.clear();
            for(int i=0;i<9;i++){
                if(board[i][j]!='.' and temp.count(board[i][j]))
                    return false;
                temp.insert(board[i][j]);
            }
        }
        return true;
    }
};