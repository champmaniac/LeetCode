class Solution {
public:
    int minSteps(string s, string t) {
        int f1[26]={0},f2[26]={0};
        for(auto it : s) f1[it-'a']++;
        for(auto it : t) f1[it-'a']--;
        int ans = 0;
        for(int i=0;i<26;i++) ans+=abs(f1[i]);
        return ans;
    }
};