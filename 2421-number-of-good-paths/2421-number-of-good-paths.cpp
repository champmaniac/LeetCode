class UnionFind {
    private:
        vector<int> id, rank;
        int cnt;
    public:
        UnionFind(int cnt) : cnt(cnt) {
            id = vector<int>(cnt);
            rank = vector<int>(cnt, 0);
            for (int i = 0; i < cnt; ++i) id[i] = i;
        }
        int find(int p) {
            if (id[p] == p) return p;
            return id[p] = find(id[p]);
        }
        bool connected(int p, int q) { 
            return find(p) == find(q); 
        }
        void connect(int p, int q) {
            int i = find(p), j = find(q);
            if (i == j) return;
            if (rank[i] < rank[j]) {
                id[i] = j;  
            } else {
                id[j] = i;
                if (rank[i] == rank[j]) rank[j]++;
            }
            --cnt;
        }
};

class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int N = vals.size(), goodPaths = 0;
        vector<vector<int>> adj(N);
        map<int, vector<int>> sameValues;
        
        for (int i = 0; i < N; i++) {
            sameValues[vals[i]].push_back(i);
        }
        
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            
            if (vals[u] >= vals[v]) {
                adj[u].push_back(v);
            } else if (vals[v] >= vals[u]) {
                adj[v].push_back(u);
            }
        }
        
        UnionFind uf(N);
        
        for (auto &[value, allNodes] : sameValues) {
            
            for (int u : allNodes) {
                for (int v : adj[u]) {
                    uf.connect(u, v);
                }
            }
            
            unordered_map<int, int> group;
            
            for (int u : allNodes) {
                group[uf.find(u)]++;
            }
            
            goodPaths += allNodes.size();
            
            for (auto &[_, size] : group) {
                goodPaths += (size * (size - 1) / 2);
            }
        }
        
        return goodPaths;
    }
};