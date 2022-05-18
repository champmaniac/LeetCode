class Solution {
public:
    vector<int> parent;
    int findPar(int node){
        if(node==parent[node]) return node;
        return parent[node] = findPar(parent[node]);
    }
    
    bool unionn(int u,int v){
        u = findPar(u);
        v = findPar(v);
        
        if(u==v) return false;
        parent[v]=u;
        return true;
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        parent.resize(n);
        
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || (stones[i][1]==stones[j][1]))
                    if(unionn(i,j))
                        cnt++;
            }
        }
        return cnt;
    }
};