class Solution {
public:
    int dx[4] = {+1,0,-1,0};
    int dy[4] = {0,-1,0,+1};
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<bool>>vis(n+1,vector<bool>(m+1,0));
        vis[entrance[0]][entrance[1]]=1;
        q.push({entrance[0],entrance[1]});
        int level=0;
        while(!q.empty()){
            int size = q.size();
            level++;
            while(size--){
                pair<int,int> p = q.front();
                q.pop();
                
                for(int i=0;i<4;i++){
                    int newr = p.first+dx[i];
                    int newc = p.second+dy[i];
                    
                    if(newr>=0 && newc>=0 && newr<n && newc<m){
                        if(maze[newr][newc]!='.') continue;
                        if(vis[newr][newc]) continue;
                        
                        if(newr==0 || newc==0 || newr==n-1 || newc==m-1) return level;
                        
                        vis[newr][newc]=1;
                        q.push({newr,newc});
                    }
                }
            }
        }
        return -1;
    }
};