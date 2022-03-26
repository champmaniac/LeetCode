// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &mat)
    {
        // code here 
        int ncol = mat[0].size(), nrow = mat.size();
        vector<pair<int,int>> pairs;
        for(int r=0;r<nrow;r++){
            for(int c=0;c<ncol;c++){
                if(mat[r][c]==1){
                    pairs.push_back(make_pair(r,c));
                }
            }
        }
        
        for(pair<int,int> pair:pairs){
            for(int i=0;i<ncol;i++) mat[pair.first][i]=1;
            for(int i=0;i<nrow;i++) mat[i][pair.second]=1;
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


  // } Driver Code Ends