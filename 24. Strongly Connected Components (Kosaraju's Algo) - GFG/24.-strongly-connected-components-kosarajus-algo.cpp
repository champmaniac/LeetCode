// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int V, vector<int> adj[],stack<int> &st,vector<bool> &vis, int src){
	    vis[src]=true;
	    for(auto &v:adj[src]){
	        if(!vis[v]) dfs(V,adj,st,vis,v);
	    }
	    st.push(src);
	}
	void dfs2(int V, vector<int> adj[],vector<bool> &vis, int src){
	    vis[src]=true;
	    for(auto &v:adj[src]){
	        if(!vis[v]) {
	            dfs2(V,adj,vis,v);
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        stack<int> st;
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]) dfs(V,adj,st,vis,i);
        }
        
        vector<int> transpose[V];
        for(int i=0;i<V;i++){
            vis[i]=false;
            for(auto &e:adj[i]){
                transpose[e].push_back(i);
            }
        }
        int cnt=0;
        while(!st.empty()){
            int cur = st.top();
            if(!vis[cur]) dfs2(V,transpose,vis,cur),cnt++;
            st.pop();
        }
        return cnt;
        
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends