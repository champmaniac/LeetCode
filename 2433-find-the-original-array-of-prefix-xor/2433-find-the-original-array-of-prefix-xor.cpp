class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        for(int i=0,prev=0;i<pref.size();i++){
            pref[i] = prev^pref[i];
            prev = prev^pref[i];
        }
        return pref;
    }
};