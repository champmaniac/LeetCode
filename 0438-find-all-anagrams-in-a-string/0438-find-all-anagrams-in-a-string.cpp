class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size(), n=p.size();
        vector<int> goal(26),curr(26),res;
        for(char c:p){
            goal[c-'a']++;
        }
        for(int i=0;i<m;i++){
            curr[s[i]-'a']++;
            if(i>=n)
                curr[s[i-n]-'a']--;
            if(curr==goal)
                res.push_back(i-n+1);
        }
        return res;
        
    }
};