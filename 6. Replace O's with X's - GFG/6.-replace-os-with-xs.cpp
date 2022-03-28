// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int x,int y, vector<vector<char>> &mat, int n,int m){
        mat[x][y]='*';
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        for(int i=0;i<4;i++){
            int cx=x+dx[i];
            int cy=y+dy[i];
            if(cx>=0 && cy>=0 && cx<n && cy<m && mat[cx][cy]=='O')
                solve(cx,cy,mat,n,m);
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> ma)
   {
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(i==0 || i==n-1 || j==0 || j==m-1){
                  if(ma[i][j]=='O'){
                      solve(i,j,ma,n,m);
                   }
               }
           }
       }
      for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(ma[i][j]=='O'){
                   ma[i][j]='X';
               }
           }
      }
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(ma[i][j]=='*'){
                  ma[i][j]='O';
              }
          }
      }
      return ma;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends