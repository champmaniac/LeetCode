class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        vector<string> copy;
        for(int i=0;i<n;i++){
            copy.push_back(strs[i]);
        }
        string ans="";
        // if(n==)
        sort(copy.begin(),copy.end());
        string a = copy[0];
        string b  = copy[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }
            else break;
        }
        return ans;
    }
};