class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>sub;
        backtrack(nums, 0, n, sub, ans);
        return ans;
    }
private:
    void backtrack(vector<int>& nums, int start, int n, vector<int>& sub, vector<vector<int>>& ans) {
        if (sub.size() >= 2) {
            ans.push_back(sub);
        }
        unordered_set<int>vis;
        for (int i = start; i < n; i++) {
            if (vis.count(nums[i]) || (sub.size() && nums[i] < sub.back())) {
                continue;
            }
            vis.insert(nums[i]);
            sub.push_back(nums[i]);
            backtrack(nums, i + 1, n, sub, ans);
            sub.pop_back();
        }
    }
};
