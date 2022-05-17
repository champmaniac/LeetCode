class Solution {
public:
    int findPar(int u,vector<int>&parent){
        if(parent[u]==u) return parent[u];
        return parent[u] = findPar(parent[u],parent);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        
        int compo=0;
        for(auto &it: connections){
            int u = findPar(it[0],parent);
            int v = findPar(it[1],parent);
            
            if(u==v) continue;
            else parent[v] =u, compo++; 
        }
        return connections.size() < n-1 ? -1 : n-1-compo;
    }
};