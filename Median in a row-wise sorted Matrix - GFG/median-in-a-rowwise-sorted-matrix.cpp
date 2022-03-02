// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
		int maxi=INT_MIN,mini=INT_MAX;
       	for(int i=0;i<r;i++){
           	mini = min(mini,matrix[i][0]);
           	maxi = max(maxi,matrix[i][c-1]);
       	}
       	
       	int desired = ((r*c)+1)/2;
       	while(mini<maxi){   
           	int mid = mini+(maxi-mini)/2;
           	int place=0;
          	for(int i=0;i<r;i++){   					          place+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)- matrix[i].begin();
           	}
           	if(place<desired) mini = mid+1;
           	else maxi=mid;
       	}
       	return mini;
 }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends