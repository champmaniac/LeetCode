class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,-1);
        int n = s.size();
        int left =0,right=0;
        int len=0;
        while(right<n){
            if(freq[s[right]]!=-1) left = max(left,freq[s[right]]+1);
            freq[s[right]] = right;
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};