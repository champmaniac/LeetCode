class Solution {
public:
    int dp[1001][1001];
    int countSubstrings(string s) {
        memset(dp,-1,sizeof dp);
        // return recursive(s);
        return memoization(s);
    }
    // int recursive(string &s){
    //     int count=0;
    //     for(int i=0;i<s.size();i++){
    //         for(int j=i;j<s.size();j++){
    //             count+=isPalindrome(s,i,j);
    //         }
    //     }
    //     return count;
    // }
    
    int memoization(string &s){
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
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=s[i]==s[j]?isPalindrome(s,i+1,j-1):0;
    }
};