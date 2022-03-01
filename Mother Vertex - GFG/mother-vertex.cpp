// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int s, vector<int>adj[], bool visit[], int &count){
       visit[s] = true;
       count++;
       for(int v : adj[s]){
           if(!visit[v]) dfs(v, adj, visit, count);
       }
   }
int findMotherVertex(int V, vector<int>adj[]){
    // Code here
    int ans =-1;
    bool visit[V];
    for(int i =0; i<V; ++i){
        int count =0;
        fill(visit, visit+V, false);
        dfs(i, adj, visit, count);
        if(count == V){
            ans = i;
            break;
        }
    }
    return ans;
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
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends