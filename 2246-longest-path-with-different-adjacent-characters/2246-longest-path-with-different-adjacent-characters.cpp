class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        int ans=1; 
//at any way the minimum longest path that we can definitely get will be that particular node i.e 1
        vector<vector<int>>adj(n);
        for(int i=1;i<n;i++){
            adj[parent[i]].push_back(i);
        }
        longestPathDfs(0,adj,s,ans);
        return ans;
    }
private:
    int longestPathDfs(int node,vector<vector<int>>&adj,string &s,int &ans){
        int curmax=0;
        int totmax=0;
        
        for(auto it:adj[node]){
            int res = longestPathDfs(it,adj,s,ans);
            
            if(s[node]==s[it]){ // adjacent are same character
                continue;
            }
            if(res>curmax){
                totmax=curmax;
                curmax=res;
            }
            else if(res>totmax){
                totmax=res;
            }
        }
        ans=max(ans,1+curmax+totmax);
        return 1+curmax;
    }
};