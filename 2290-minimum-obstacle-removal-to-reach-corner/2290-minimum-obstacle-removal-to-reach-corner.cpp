class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        vector<int> dir={0,1,0,-1,0};
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dist(m,vector<int> (n,INT_MAX));
        dist[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            auto node = pq.top();
            pq.pop();
            int dis = node.first;
            int x = node.second.first;
            int y = node.second.second;
            for(int k=0;k<4;k++){
                int i = x+dir[k];
                int j = y+dir[k+1];
                
                if(i<0 || i>=m || j<0 || j>=n) continue;
                int wt=0;
                if(grid[i][j]==1)
                    wt=1;
                else wt=0;
                if(dis+wt<dist[i][j]){
                    dist[i][j] = dis+wt;
                    pq.push({dist[i][j],{i,j}});
                }
            }
        }
        return dist[m-1][n-1];
    }
};