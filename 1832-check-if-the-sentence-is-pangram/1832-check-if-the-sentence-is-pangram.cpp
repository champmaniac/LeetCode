class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int>st;
        for(auto &it:sentence){
            st.insert(it);
        }
        return st.size()==26;
    }
};