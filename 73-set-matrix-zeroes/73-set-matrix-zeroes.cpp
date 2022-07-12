class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        set<int> rows;
        set<int> cols;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(rows.count(i) || cols.count(j)){
                    mat[i][j]=0;
                }
            }
        }
    }
};