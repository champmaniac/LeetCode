//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class DisjointSet{
	vector<int> parent,rank,size;
public:
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
  private:
    bool isValid(int i,int j,int n,int m){
        if(i<0 ||  j<0 || i>=n || j>=m) return false;
        return true;
    }
  public:
    vector<int> numOfIslands(int n, int m, 
    vector<vector<int>> &operators) {
        // code here
        DisjointSet ds(n*m);
        int vis[n][m];
        memset(vis,0,sizeof vis);
        int cnt=0;
        vector<int> ans;
        for(auto it:operators){
            int row = it[0];
            int col = it[1];
            
            if(vis[row][col]==1){
                ans.push_back(cnt);
                continue;
            }
            vis[row][col]=1;
            cnt++;
            int dr[4]={0,1,0,-1};
            int dc[4]={1,0,-1,0};
            
            for(int i=0;i<4;i++){
                int nr = row+dr[i];
                int nc = col+dc[i];
                
                if(isValid(nr,nc,n,m)){
                    if(vis[nr][nc]==1){
                        int nodeNo = row*m+col;
                        int adjNodeNo =nr*m+nc;
                        
                        if(ds.findPar(nodeNo)!=ds.findPar(adjNodeNo)){
                            cnt--;
                            ds.unionBySize(nodeNo,adjNodeNo);
                        }
                        
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends