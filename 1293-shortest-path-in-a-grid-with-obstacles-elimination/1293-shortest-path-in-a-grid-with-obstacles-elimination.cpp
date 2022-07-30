class Node{
    public:
    int curRow,curCol,remSuperPower;
    Node(int r, int c, int s){
        curRow = r;
        curCol = c;
        remSuperPower = s;
    }
};
class Solution {
public:
    bool isvalid(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n) return false;
        return true;
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        if(n==1 && m==1) return 0;
        
        vector<vector<int>> vis(m,vector<int>(n,-1));
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        queue<Node*> q;
        q.push(new Node(0,0,k));
        vis[0][0]= k;
        int level=0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* curNode = q.front();
                q.pop();
                for(int i=0;i<dir.size();i++){
                    int nextRow = curNode->curRow+dir[i][0];
                    int nextCol = curNode->curCol+dir[i][1];
                    
                    if(nextRow==m-1 && nextCol==n-1) return level+1;
                    
                    if(isvalid(nextRow,nextCol,m,n)){
                        if(grid[nextRow][nextCol]==1 && curNode->remSuperPower>0 && vis[nextRow][nextCol]<(curNode->remSuperPower-1)){
                            q.push(new Node(nextRow,nextCol,curNode->remSuperPower-1));
                            vis[nextRow][nextCol] = curNode->remSuperPower-1;
                        }
                        else if(grid[nextRow][nextCol]==0 && vis[nextRow][nextCol]<(curNode->remSuperPower)){
                            q.push(new Node(nextRow,nextCol,curNode->remSuperPower));
                            vis[nextRow][nextCol] = curNode->remSuperPower;
                        }
                    }
                }
            }
            level++;
        }
        return -1;
    }
};