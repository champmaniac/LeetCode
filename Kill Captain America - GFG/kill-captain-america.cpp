// { Driver Code Starts
#include <bits/stdc++.h>
 
using namespace std;
 

 // } Driver Code Ends
class Solution{
    #define vvi vector<vector<int>>
    #define vb vector<bool>
public:
    void scc_dfs(vvi&adj,int node,vb&visi,unordered_set<int>&scc){
       visi[node]=true;
       scc.insert(node);
       for(int child : adj[node]){
           if(!visi[child])scc_dfs(adj,child,visi,scc);
       }
       return;
   }


   void topo_dfs(vvi&adj,int node,vb&visited,stack<int>&st){
       
       visited[node]=true;
       // cnt++;
       for(int child : adj[node]){
           if(!visited[child])topo_dfs(adj,child,visited,st);
       }
       
       st.push(node);
       return;
   }
   
   void dfsHelper(vvi&adj,stack<int>&st,int n,vb&visited)
   {
       for(int i=1;i<=n;i++){
           if(!visited[i])topo_dfs(adj,i,visited,st);
       }
       return;
   }
   
   void makeGraph(vvi&adj,vvi&rev_adj,vvi&V){
       for(vector<int> a : V){
           if(a.size()==0)continue;
           adj[a[0]].push_back(a[1]);
           rev_adj[a[1]].push_back(a[0]);
       }
   }

   int getOutDegree(vvi&adj, unordered_set<int>&scc){
       
       int cnt = 0;
       for(auto i : scc){
           for(int child : adj[i]){
               if(scc.find(child)==scc.end())cnt++;
           }
           
       }
       return cnt;
   }

   int captainAmerica(int N, int M, vector<vector<int>> &V){
       // Code Here
       
       vector<vector<int>> adj(N+1), rev_adj(N+1);
       makeGraph(adj,rev_adj,V);
       
       stack<int> st;
       
       vector<bool> visited(N+1,false);
       
       dfsHelper(adj,st,N,visited);
       
       for(int i=1;i<=N;i++)visited[i]=false;
       
       int ans = 0;
       int out_degree_cnt = 0;
       while(!st.empty()){
           
           unordered_set<int>scc;
           int top_node = st.top();
           st.pop();
           
           if(!visited[top_node]){
               
               scc_dfs(rev_adj,top_node,visited,scc);
               
               int od = getOutDegree(adj,scc);
               
               if(od==0){
                   out_degree_cnt++;
                     
               int sz = scc.size();
               
                   ans = max(sz,ans);
               }
             
               
           }
           
       }
       return out_degree_cnt>1 ? 0 : ans;
       
   } 
};

// { Driver Code Starts.
 

int main() {
    int t;cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m+1);
        for(int i=0;i<m;i++){
            int a, b;cin >> a >> b;
            v[i].push_back(a);
            v[i].push_back(b);
        }
        
        Solution obj;
        cout << obj.captainAmerica(n, m, v) << endl;
    }
 
}  // } Driver Code Ends