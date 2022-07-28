class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(auto it:freq){
            if(it.second>=1) return false;
        }
        return true;
    }
};