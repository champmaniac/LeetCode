class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                sum += nums[i];
            }
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int val = queries[i][0];
            int index = queries[i][1];
            if (nums[index] % 2 == 0) {
                sum -= nums[index];
            }
            nums[index] += val;
            if (nums[index] % 2 == 0) {
                sum += nums[index];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};