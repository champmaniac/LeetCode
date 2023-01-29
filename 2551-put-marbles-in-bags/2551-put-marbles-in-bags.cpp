class Solution {
public:
    long long int putMarbles(vector<int>& v, int limit) {
        if(limit == 1 || limit == v.size()) return 0;
        long long int ans1 = 0, ans2 = 0;
        limit--;
        vector<long long int> sums;
        for(int i = 0; i < v.size() - 1; i++) {
            sums.push_back(v[i] + v[i + 1]);
        }
        sort(sums.begin(), sums.end());
        for(int i = 0; i < limit; i++) {
            ans1 += sums[i];
        }
        for(int i = sums.size() - 1; i >= sums.size() - limit; i--) {
            ans2 += sums[i];
        }
        return ans2 - ans1;
    }
};