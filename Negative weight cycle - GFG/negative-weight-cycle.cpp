// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    const int inf = 1e7;
	    vector<int> dist(n,inf);
	    dist[0] =0; bool change;
	    for(int i=0;i<n;i++){
	        change = false;
	        for(auto e:edges){
	            int u = e[0];
	            int v = e[1];
	            int w = e[2];
	            if(dist[v]>dist[u]+w) change = true;
	            dist[v] = min(dist[v],dist[u]+w);
	        }
	    }
	    return (change==true)?1:0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends