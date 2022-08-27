class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        // Precompute column prefix sums
        for(int i=0;i<m;i++){
            int curSum=0;
            for(int j=0;j<n;j++){
                curSum+=mat[i][j];
                mat[i][j]=curSum;
            }
        }
        int maxSum=INT_MIN;
        for(int lcol=0;lcol<n;lcol++){
            for(int rcol=lcol;rcol<n;rcol++){
                set<int> bst;
                bst.insert(0);
                
                int rowPrefSum=0;
                for(int row=0;row<m;++row){
                    int currSum = mat[row][rcol]-(lcol==0?0:mat[row][lcol-1]);
                    rowPrefSum+=currSum;
                    
                    auto searchRes = bst.lower_bound(rowPrefSum-k);
                    if(searchRes!=bst.end()){
                        maxSum = max(maxSum,rowPrefSum-*searchRes);
                    }
                    bst.insert(rowPrefSum);
                }
            }
        }
        return maxSum;
    }
};