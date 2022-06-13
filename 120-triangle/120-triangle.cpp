class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> minlen(triangle.back());
        for(int k=n-2;k>=0;k--){ // for each layer k=layer
            for(int i=0;i<=k;i++){
                minlen[i]= min(minlen[i],minlen[i+1])+ triangle[k][i];
            }
        }
        return minlen[0];
    }
};