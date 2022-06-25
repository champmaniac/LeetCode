// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {

public:
    long long tmp=1e18;
    bool p=false;
    long long dfs(int curr,vector<vector<long long>> &adj , vector<bool> &vis ,int *cap)
    {
       vis[curr]=true;
       long long mx=0;
       int l=0;
        for(auto nab : adj[curr])
       {
           if(!vis[nab])
           {
               l++;
               mx=max(mx,dfs(nab,adj,vis,cap));
               if( l*mx > tmp)
               {
                    p=true;
                    return -1;
               }
            }
       }
       return  (cap[curr-1]+mx*l);
    }
    long long minimum_amount(vector<vector<int>> &v, int num, int start, int *cap){
       
       vector<vector<long long>> adj(num+1);
       vector<bool> vis(num+1,false);
        for(int i=0;i<v.size()-1;++i)
       {
           adj[v[i][0]].push_back(v[i][1]);
           adj[v[i][1]].push_back(v[i][0]);
       }
       long long t= dfs(start,adj,vis,cap);
    
        if(p || t>tmp)
        return -1;
        return t;
    }
};

// { Driver Code Starts.


int main()
 {
	int T;
	cin>> T;
	while (T--)
	{
	    int num, start;
	    cin>>num>>start;
	    int cap[num];
	    for(int i = 0; i<num; i++)
	        cin>>cap[i];
	    
	    vector<vector<int>> Edges(num);
	    for(int i=1;i < num;i++){
	        int u, v; cin >> u >> v;
	        Edges[i-1].push_back(u);
	        Edges[i-1].push_back(v);
	    }
	    
	    
    	Solution obj;
	    long long ans = obj.minimum_amount(Edges, num, start, cap);
	    cout << ans << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends