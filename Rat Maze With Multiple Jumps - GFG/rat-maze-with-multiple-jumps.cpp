// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size(),0));
	   if(!ratmaze(matrix,ans,0,0))
	   return {{-1}};
	   return ans;
	}
	
	bool withinboundary(int i,int j,vector<vector<int>>&matrix)
	{
	    if(i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]==0)
	    return false;
	    
	    return true;
	    
	}
	
	bool ratmaze(vector<vector<int>>&matrix,vector<vector<int>>&ans,int i,int j)
	{   
	    if(i==matrix.size()-1 && j==matrix[0].size()-1)
	    { ans[i][j]=1;
	    return true;
	    }
	    if(withinboundary(i,j,matrix))
	    {   ans[i][j]=1;
	        
	        for(int noofsteps=1;noofsteps<=matrix[i][j];noofsteps++)
	        {
	            if(ratmaze(matrix,ans,i,j+noofsteps))return true; //right
	            if(ratmaze(matrix,ans,i+noofsteps,j))return true; //down
	            
	        }
	        
	        ans[i][j]=0;
	    }
	    
	    return false;
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends