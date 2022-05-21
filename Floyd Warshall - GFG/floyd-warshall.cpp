// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&mat){
	    // Code here
	    int n = mat.size();
	    int i,j,k;
	    for(k=0;k<n;k++){
	        for(i=0;i<n;i++){
	            for(j=0;j<n;j++){
	                if(i==k || j==k || mat[i][k]==-1 || mat[k][j]==-1) continue;
	                else if(mat[i][j]==-1) mat[i][j]=INT_MAX;
	                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
	            }
	        }
	    }
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends