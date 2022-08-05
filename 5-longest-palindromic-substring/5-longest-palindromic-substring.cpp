class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res="";
        if(n==0) return res;
        int dp[n][n];
        int start=0,end=1;
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i,end=2;
            }
        }
        for(int j=2;j<n;j++){
            for(int i=0;i<n-j;i++){
                int left=i;
                int right = i+j;
                if(dp[left+1][right-1]==1 && s[left]==s[right]){
                    dp[left][right]=1;
                    start=i;
                    end=j+1;
                }
            }
        }
        return s.substr(start,end);
    }
    // bool isPalindrome(string s){
    //     int i=0,j=s.size()-1;
    //     while(i<j){
    //         if(s[i++]!=s[j--]) return false;
    //     }
    //     return true;
    // }
    // string longestPalindrome(string s) {
    //     int n = s.size();
    //     string res="";
    //     if(n==1) return s;
    //     for(int i=0;i<n-1;i++){
    //         for(int j=1;j<=n-i;j++){
    //             if(isPalindrome(s.substr(i,j))){
    //                 if(res.size()<j){
    //                     res=s.substr(i,j);
    //                 }
    //             }
    //         }
    //     }
    //     return res;
    // }
};