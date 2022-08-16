class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(auto c:s) freq[c-'a']++;
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};