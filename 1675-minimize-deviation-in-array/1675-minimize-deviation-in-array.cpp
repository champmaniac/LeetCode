class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> s;
        for(auto &a:nums){
            s.insert(a%2?a*2:a);
        }
        int res = *s.rbegin() - *s.begin();
        while (*s.rbegin() % 2 == 0) {
            s.insert(*s.rbegin() / 2);
            s.erase(*s.rbegin());
            res = min(res, *s.rbegin() - *s.begin());
        }
        return res;
    }
    
};