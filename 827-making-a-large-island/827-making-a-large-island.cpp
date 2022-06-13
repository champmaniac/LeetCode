class DSU{
    public:
    vector<int> height;
    vector<int> parent;
    vector<int> size;
    
    DSU(int n){
        parent.resize(n,-1);
        height.resize(n,1);
        size.resize(n,1);
    }
    int findPar(int node){
        if(parent[node]==-1) return node;
        return (parent[node]=findPar(parent[node]));
    }
    int Union(int node1,int node2){
        int ra = findPar(node1);
        int rb = findPar(node2);
        if(ra!=rb){
            if(height[ra]<height[rb]){
                parent[ra]=rb;
                size[rb]+=size[ra];
                return size[rb];
            }
            else if(height[rb]<height[ra]){
                parent[rb]=ra;
                size[ra]+=size[rb];
                return size[ra];
            }
            else{
                parent[rb]=ra;
                height[ra] ++;
                size[ra]+=size[rb];
                return size[ra];
            }
        }
        return -1;
    }
};
class Solution {
public:
    int bfs(DSU& dsu, int i,int j,vector<vector<int>> &grid,vector<vector<bool>> &vis){
        queue<int> q;
        int n = grid.size();
        vector<vector<int>> dir={{0,1},{0,-1},{-1,0},{1,0}};
        vis[i][j]=true;
        q.push(i*n+j);
        int size = 0;
        while(!q.empty()){
            int cell = q.front();
            q.pop();
            int r = cell/n;
            int c = cell%n;
            size++;
            
            for(int k=0;k<dir.size();k++){
                int nr = r+dir[k][0];
                int nc = c+dir[k][1];
                
                if(nr>=0 && nc>=0 && nr<n && nc<n && !vis[nr][nc] && grid[nr][nc]==1){
                    q.push(nr*n+nc);
                    dsu.Union(nr*n+nc,cell);
                    vis[nr][nc]=true;
                }
            }
        }
        return size;
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DSU dsu = DSU(n*n);
        int size=0;
        int maxSize = 0;
        vector<vector<int>> dir ={{0,1},{0,-1},{1,0},{-1,0}};
        vector<vector<bool>> vis(n,vector<bool> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]) 
                    maxSize = max(maxSize,bfs(dsu,i,j,grid,vis));
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    unordered_set<int> st;
                    for(int k=0;k<dir.size();k++){
                        int nr = i+dir[k][0];
                        int nc = j+dir[k][1];
                        
                        if(nr>=0 && nc>=0 && nr<n && nc<n && grid[nr][nc]==1){
                            st.insert(dsu.findPar(nr*n+nc));
                        }
                    }
                    int curSize = 1;
                    for(auto root:st){
                        curSize += dsu.size[root];
                    }
                    maxSize = max(maxSize,curSize);
                }
            }
        }
        return maxSize;
    }
};