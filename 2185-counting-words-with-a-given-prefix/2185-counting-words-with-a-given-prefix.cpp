class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
         int ans = 0;
        for(auto str: words){
            int i=0,j=0;
            while(i<str.length() && j<pref.length()){
                if(str[i]!=pref[j]) break;
                i++;
                j++;
            }
            if(j==pref.length()) ans++;
        }
        return ans;
    }
};