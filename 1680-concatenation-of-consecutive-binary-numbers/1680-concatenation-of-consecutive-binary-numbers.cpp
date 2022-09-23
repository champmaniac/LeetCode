class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1e9 + 7;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            int x = i;
            int len = 0;
            while (x) {
                x >>= 1;
                len++;
            }
            ans = ((ans << len) + i) % mod;
        }
        return ans;
    }
};
