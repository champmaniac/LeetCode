#include<bits/stdc++.h>
class DSU{
	int *parent;
	int *rank;
	
	public:
	DSU(int n){
		parent = new int[n+1];
		rank = new int[n+1];
		for(int i=1;i<=n;i++){
			parent[i]=-1;
			rank[i]=1;
		}
	}
	
	int findPar(int u){
		if(parent[u]==-1) return u;
		return parent[u] = findPar(parent[u]);
	}
	void setUnion(int i,int j){
		int u = findPar(i);
		int v = findPar(j);
		if(u!=v){
			if(rank[v]>rank[u]) {
				parent[u]=v;
				rank[v]+=rank[u];
			}
			else{
				parent[v]=u;
				rank[u]+=rank[v];
			}
		}
	}
};

bool comp(vector<int> const &a, vector<int> const &b){
	return a[2]<b[2];
}
int getMinimumCost(int v, int e, vector<vector<int>> &connections)
{
	//	Write your code here.
	int cost =0;
	DSU dsu(v);
	sort(connections.begin(),connections.end(),comp);
	
	for(int i=0;i<connections.size();i++){
		int u = connections[i][0];
		int v = connections[i][1];
		int wt =connections[i][2];
		
		if(dsu.findPar(u)!=dsu.findPar(v)){
			dsu.setUnion(u,v);
			cost+=wt;
		}
	}
	
	int parentOfAll = dsu.findPar(1);
	for(int i=2;i<=v;i++){
		if(parentOfAll!=dsu.findPar(i)) return -1;
	}
	return cost;
}
