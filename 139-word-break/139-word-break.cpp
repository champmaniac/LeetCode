class Solution {
public:
    int helper(int i,string s,set<string>&wordDict,vector<int> &dp){
        int n = s.size();
        if(i==n) return 1;
        if(dp[i]!=-1) return dp[i];
        string temp;
        for(int j=i;j<n;j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(helper(j+1,s,wordDict,dp)) return dp[i]= 1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        for(auto it:wordDict){
            st.insert(it);
        }
        vector<int> dp(s.size()+1,-1);
        return helper(0,s,st,dp);
    }
};