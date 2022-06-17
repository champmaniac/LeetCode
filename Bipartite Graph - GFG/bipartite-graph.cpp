// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfs(int node, vector<int> adj[], vector<int> &color){
        queue<pair<int,int>> q;
        q.push({node,1});
        color[node]=1;
        while(!q.empty()){
            int curNode = q.front().first;
            int curCol = q.front().second;
            q.pop();
            for(auto &nbr: adj[curNode]){
                if(color[nbr]==-1){
                    color[nbr]=1-color[curNode];
                    q.push({nbr,color[nbr]});
                }
                else if(color[nbr]==color[curNode]) return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!bfs(i,adj,color)) return false;
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends