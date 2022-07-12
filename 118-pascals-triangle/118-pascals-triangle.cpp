class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res(n);
        for(int i=0;i<n;i++){
            res[i].resize(i+1);
            res[i][0] = res[i][i] =1;
            for(int j=1;j<i;j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};