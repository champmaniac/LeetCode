class Solution {
public:
    string breakPalindrome(string palindrome) {
        int size = palindrome.size();
        for(int i=0;i<size/2;i++){
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[size-1]='b';
        return size<2?"":palindrome;
    }
};