class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<vector<bool>> vis(n,vector<bool> (n,false));
        queue<int> q;
        q.push(1);
        vis[n-1][0]=true;
        int moves = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz --){
                int curPos = q.front();
                if(curPos==n*n) return moves;
                q.pop();
                for(int i=1;i<=6;i++){
                    int nextPos = curPos+i;
                    if(nextPos>n*n) break;
                    
                    int r = n- (nextPos-1)/n-1;
                    int c = (nextPos-1)%n;
                    
                    if(r%2==n%2) c = n-c-1;
                    if(!vis[r][c]){
                        vis[r][c]=true;
                        if(board[r][c]!=-1){
                            q.push(board[r][c]);
                        }
                        else q.push(nextPos);
                    }
                }
            }
            moves++;
        }
        return -1;
    }
};