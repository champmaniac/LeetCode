// class Solution {
// public:
//     int help(int i, string s, set<string>&wordDict){
//         if(i==s.size()) return 1;
        
//         string temp;
//         for(int j=i;j<s.size();j++){
//             temp+=s[j];
//             if(wordDict.find(temp)!=wordDict.end()){
//                 if(help(j+1,s,wordDict)) return 1;
//             }
//         }
//         return 0;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         set<string> st;
//         for(auto a:wordDict) st.insert(a);
//         return help(0,s,st);
//     }
// };


class Solution {
public:
    int dp[301];
    int help(int i, string s, set<string>&wordDict){
        if(i==s.size()) return 1;
        
        string temp;
        
        if(dp[i]!=-1) return dp[i];
        
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(help(j+1,s,wordDict)) return dp[i]= 1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        set<string> st;
        for(auto a:wordDict) st.insert(a);
        return help(0,s,st);
    }
};