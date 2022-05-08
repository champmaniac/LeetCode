class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res ="";
        if(n==0) return res;
        sort(begin(strs),end(strs));
        string a = strs[0];
        string b = strs[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                res+=a[i];
            }
            else break;
        }
        return res;
    }
};