class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]={0};
        int l=0,r=0,ans=0,n=s.size();
        while(r<n){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};