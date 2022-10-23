//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class DisjointSet{
public:
    vector<int> parent,rank,size;
	DisjointSet(int n){
		rank.resize(n+1,0);
		parent.resize(n+1);
		size.resize(n+1);
		for(int i=0;i<n;i++){
			parent[i]=i;
			size[i]=1;
		}
	}

	int findPar(int node){
		if(node==parent[node])
			return node;
		return parent[node] = findPar(parent[node]);
	}

	void unionByRank(int u,int v){
		int up = findPar(u);
		int uv = findPar(v);

		if(up==uv) return;
		if(rank[up]<rank[uv]){
			parent[up]=uv;
		}
		else if(rank[up]>rank[uv]){
			parent[uv]=up;
		}
		else
			parent[uv]=up;
	}
	
	void unionBySize(int u,int v){
		int up = findPar(u);
		int uv = findPar(v);

		if(up==uv) return;
		if(size[up]<size[uv]){
			parent[up]=uv;
			size[uv]+=size[up];
		}
		else{
			parent[uv]=up;
			size[up]+=size[uv];
		}
	}
};
class Solution {
  public:
    int Solve(int n, vector<vector<int>>& edge){
        // code here
        DisjointSet ds(n);
        int cnt=0;
        for(auto it:edge){
            int u = it[0];
            int v = it[1];
            
            if(ds.findPar(u)==ds.findPar(v)){
                cnt++;
            }
            else{
                ds.unionBySize(u,v);
            }
        }
        int compo=0;
        for(int i=0;i<n;i++){
            if(ds.parent[i]==i) compo++;
        }
        int ans=compo-1;
        if(cnt>=ans) return ans;
        else return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m; cin>>n>>m;
        vector<vector<int>>adj;
        
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
            
            Solution Obj;
            cout<<Obj.Solve(n,adj)<<"\n";
    }
    return 0;
}
// } Driver Code Ends