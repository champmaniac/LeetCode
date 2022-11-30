class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        unordered_set<int>st;
        for(auto it:mp){
            st.insert(it.second);
        }
        return st.size()==mp.size();
    }
};