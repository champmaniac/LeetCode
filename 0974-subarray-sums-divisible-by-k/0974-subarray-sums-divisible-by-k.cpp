class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix_sum(n + 1);
        for (int i = 0; i < n; i++) {
            prefix_sum[i + 1] = prefix_sum[i] + nums[i];
        }
        unordered_map<int, int> remainder_count;
        int res = 0;
        for (int i = 0; i <= n; i++) {
            int remainder = (prefix_sum[i] % k + k) % k;
            if (remainder_count.count(remainder) == 0) {
                remainder_count[remainder] = 0;
            }
            res += remainder_count[remainder];
            remainder_count[remainder]++;
        }
        return res;
    }
};
