class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0) return false;
        int row=0;
        while((row<matrix.size()) && (matrix[row].back()<target))
            row++;
        if(row>=matrix.size()) return false;
        return binarySearch(matrix[row],target);
    }
    bool binarySearch(vector<int>& matrix, int target) {
        int l=0,r=matrix.size();
        while(l<=r){
            int mid = (l+r)/2;
            if(matrix[mid]==target)
                return true;
            else if(matrix[mid]<target)
                l = mid+1;
            else
                r = mid-1;
        }
        return false;
    }
};