class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxans=INT_MIN;
        int n = s.size();
        if(n==0) return 0;
        unordered_set<int> st;
        int i=0;
        for(int j=0;j<n;j++){
            if(st.find(s[j])!=st.end()){
                while(i<j && st.find(s[j])!=st.end()){
                    st.erase(s[i]);
                    i++;
                }
            }
            st.insert(s[j]);
            maxans = max(maxans,j-i+1);
        }
        return maxans;
    }
};