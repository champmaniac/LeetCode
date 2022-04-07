class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size(), m = words.size(), wlen = words[0].size();
        int tot = m*wlen;
        vector<int> ans;
        unordered_map<string,int> mp;
        for(auto i:words){
            mp[i]++;
        }
        for(int i=0;i<=n-tot;i++){
            unordered_map<string,int> cur;
            for(int j=i;j<i+tot;j+=wlen){
                string w="";
                for(int k=j;k<j+wlen;k++)
                    w+=s[k];
                cur[w]++;
            }
            if(cur==mp) ans.push_back(i);
        }
        return ans;
    }
};