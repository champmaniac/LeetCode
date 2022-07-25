class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if(!n) return 0;
        vector<int> lps = KMP(needle);
        for(int i=0,j=0;i<n;){
            if(haystack[i]==needle[j]) i++, j++;
            if(j==m) return i-j;
            if(i<n && haystack[i]!=needle[j]){
                j?j=lps[j-1]:i++;
            }
        }
        return -1;
    }
private:
    vector<int> KMP(string needle){
        int n = needle.size();
        vector<int> lps(n,0);
        for(int i=1,len=0;i<n;){
            if(needle[i]==needle[len]){
                lps[i++] = ++len;
            }
            else if(len) len = lps[len-1];
            else{
                lps[i++] = 0;
            }
        }
        return lps;
    }
};