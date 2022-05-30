// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfs(int ind, vector<int> &color, vector<int> adj[]){
        queue<pair<int,int>> q;
        q.push({ind,1});
        color[ind]=1;
        while(!q.empty()){
            int curNode = q.front().first;
            int curCol = q.front().second;
            q.pop();
            for(auto nbr:adj[curNode]){
                if(color[nbr]==-1){
                    color[nbr]=1-curCol;
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
	    vector<bool> vis(V,false);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!bfs(i,color,adj)) return false;
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