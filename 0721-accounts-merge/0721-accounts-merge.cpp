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
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,int> mpMailNode;
        int n = accounts.size();
        DisjointSet ds(n);
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail = accounts[i][j];
                if(mpMailNode.find(mail)==mpMailNode.end()){
                    mpMailNode[mail]=i;
                }
                else{
                    ds.unionBySize(i,mpMailNode[mail]);
                }
            }
        }
        vector<string> mergedMail[n];
        for(auto it:mpMailNode){
            string mail = it.first;
            int node = ds.findPar(it.second);
            mergedMail[node].push_back(mail);
        }
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            if(mergedMail[i].size()==0) continue;
            sort(mergedMail[i].begin(),mergedMail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it:mergedMail[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};