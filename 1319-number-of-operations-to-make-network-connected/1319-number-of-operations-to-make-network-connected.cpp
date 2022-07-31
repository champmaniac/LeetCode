struct DSU{
    vector<int> rank;
    vector<int> parent;
    public:
    DSU(int n){
        rank.resize(n,0), parent.resize(n,0);
        iota(parent.begin(), parent.end(), 0);
    }
    int findParent(int a){
        if(a==parent[a]) return a;
        return parent[a] = findParent(parent[a]);
    }
    void Union(int u,int v){
        int parU = findParent(u);
        int parV = findParent(v);
        
        if(rank[parU]<rank[parV]){
            parent[parU]=parV;
        }
        else if(rank[parU]>rank[parV]){
            parent[parV]=parU;
        }
        else{
            parent[parU]=parV;
        }
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int edges = connections.size();
        if(edges<n-1) return -1;
        //Use union find to count number of connected components
        //No. of operations needed = TotalConnectedComp - 1.
        int minOps=n;
        DSU* dsu = new DSU(n);
        for(auto &e:connections){
            int u = e[0];
            int v = e[1];
            
            int parU = dsu->findParent(u);
            int parV = dsu->findParent(v);
            
            if(parU!=parV){
                dsu->Union(u,v);
                minOps-=1;
            }
        }
        return minOps-1;
    }
};