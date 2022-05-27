// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkCycle(int node, vector<int> &vis, vector<int> adj[], vector<int> &st){
        st[node]=1;
        if(!vis[node]){
            vis[node]=1;
            for(auto it : adj[node]){
                if(!vis[it] && checkCycle(it,vis,adj,st))
                    return true;
                if(st[it]) return true;
            }
        }
        st[node] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code herev
        vector<int> vis(V,0);
        vector<int> st(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] && checkCycle(i,vis,adj,st)) return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends