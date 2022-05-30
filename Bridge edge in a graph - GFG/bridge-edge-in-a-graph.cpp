// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<int> vis(10000,0);
        dfs(c,adj,c,d,vis);
        return (!vis[d]);
        
    }
    void dfs(int ind, vector<int> adj[], int c, int d,vector<int> &vis){
        vis[ind]=1;
        for(auto &it:adj[ind]){
            if(ind==c && it==d) continue;
            if(!vis[it]){
                dfs(it,adj,c,d,vis);
            }
        }
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends