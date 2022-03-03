// class Solution { // Time Complexity: O(2m*n) Auxiliary Space: O(m*n)
// public:
//     int helper(int i,int j,int r,int c,vector<vector<int>> &A){
//         if(i==r||j==c) return 0;
//         if(A[i][j]==1) return 0;
        
//         if(i==r-1 && j==c-1) return 1;
        
//         return helper(i+1,j,r,c,A)+helper(i,j+1,r,c,A); 
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& A) {
//         int r = A.size();
//         int c = A[0].size();
        
//         return helper(0,0,r,c,A);
//     }
// };

// class Solution{ Top Down Dp // Time Complexity: O(m*n) Auxiliary Space: O(m*n)
// public:
//     int helper(int i,int j,int r,int c,vector<vector<int>> &A,vector<vector<int>> &paths){
//         if(i==r||j==c) return 0;
//         if(A[i][j]==1) return 0;
        
//         if(i==r-1 && j==c-1) return 1;
        
//         if(paths[i][j]!=-1) return paths[i][j];
        
//         return helper(i+1,j,r,c,A,paths)+helper(i,j+1,r,c,A,paths); 
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& A) {
//         int r = A.size();
//         int c = A[0].size();
        
//         vector<vector<int>> paths(r,vector<int> (c,-1));
//         return helper(0,0,r,c,A,paths);
//     }
// };

class Solution{ // Space Optimized TC O(m*n) SC O(1)
public:
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        int r = A.size();
        int c = A[0].size();
        
        // If obstacle is at starting position
        if(A[0][0]==1) return 0;
        
        A[0][0]=1;
        
        for(int j=1;j<c;j++){
            if(A[0][j]==0)
                A[0][j]=A[0][j-1];
            else
                A[0][j]=0;
        }
        
        for(int i=1;i<r;i++){
            if(A[i][0]==0)
                A[i][0]=A[i-1][0];
            else
                A[i][0]=0;
        }
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(A[i][j]==0){
                    A[i][j]=A[i-1][j]+A[i][j-1];
                }
                else
                    A[i][j]=0;
            }
        }
        return A[r-1][c-1];
    }
};