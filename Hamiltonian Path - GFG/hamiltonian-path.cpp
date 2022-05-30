// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    bool dfs(int node, int c, vector<int> arr[], int n,int m,vector<int> &vis){
        if(c==n) return true;
        vis[node]=1;
        for(auto x : arr[node]){
            if(!vis[x]){
                if(dfs(x,c+1,arr,n,m,vis)) return true;
            }
        }
        vis[node]=0;
        return false;
    }
    bool check(int n,int m,vector<vector<int>> Edges)
    {
        // code here
        vector<int> arr[n+1];
        for(auto x: Edges){
            arr[x[0]].push_back(x[1]);
            arr[x[1]].push_back(x[0]);
        }
        vector<int> vis(n+1,0);
        for(int i=1;i<=n;i++){
            if(dfs(i,1,arr,n,m,vis)) return true;
        }
        return false;
    }
};
 

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}  // } Driver Code Ends