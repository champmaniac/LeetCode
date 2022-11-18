class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(k==0) return n;
        if(n==0 || n<k) return 0;
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int ind=0;
        while(ind<n && mp[s[ind]]>=k) ind++;
        if(ind==n) return n;
        int left = longestSubstring(s.substr(0,ind),k);
        int right = longestSubstring(s.substr(ind+1),k);
        return max(left,right);
    }
};