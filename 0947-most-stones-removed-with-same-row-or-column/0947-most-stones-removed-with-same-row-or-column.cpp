class Solution {
public:
    vector<int>parent;
    int findPar(int node){
        if(node==parent[node]) return node;
        return parent[node]=findPar(parent[node]);
    }
    bool join(int u,int v){
        u = findPar(u);
        v = findPar(v);
        
        if(u==v) return false;
        parent[v]=u;
        return true;
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int count=0;
        parent.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    if(join(i,j)) count++;
                }
            }
        }
        return count;
    }
};