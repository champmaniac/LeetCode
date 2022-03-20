class Solution {
public:
    int countSubstrings(string s) {
        return recursive(s);
    }
    int recursive(string &s){
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                count+=isPalindrome(s,i,j);
            }
        }
        return count;
    }
    
    int isPalindrome(string &s, int i, int j){
        if(i>=j) return 1;
        return s[i]==s[j]?isPalindrome(s,i+1,j-1):0;
    }
};