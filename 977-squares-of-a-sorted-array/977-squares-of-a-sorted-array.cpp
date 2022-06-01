class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            res[i] = abs(nums[i]*nums[i]);
        }
        sort(res.begin(),res.end());
        return res;
    }
};