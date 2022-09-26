class Solution {
public:
    vector<int> parent;
    int findParent(int i){
        if(parent[i]==-1) return i;
        return parent[i]=findParent(parent[i]);
    }
    void UnionFind(int a,int b){
        int u = findParent(a);
        int v = findParent(b);
        
        if(u!=v){
            parent[u]=v;
        }
    }
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26,-1);
        for(auto e:equations){
            if(e[1]=='=')
                UnionFind(e[0]-'a',e[3]-'a');
        }
        for(auto e:equations){
            if(e[1]=='!' && findParent(e[0]-'a')==findParent(e[3]-'a')) return false;
        }
        return true;
    }
};