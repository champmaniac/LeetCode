class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                bool isPalindrome=true;
                for(int k=i;k<=j;k++){
                    if(s[k]!=s[i+j-k]){
                        isPalindrome=false;
                        break;
                    }
                }
                if(isPalindrome) count++;
            }
        }
        return count;
    }
};