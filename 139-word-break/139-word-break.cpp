class Solution {
public:
    bool helper(int ind, string s, set<string>&st,vector<int> &dp){
        if(ind==s.size()) return 1;
        if(dp[ind]!=-1) return dp[ind];
        string temp;
        for(int i=ind;i<s.size();i++){
            temp+=s[i];
            if(st.find(temp)!=st.end()){
                if(helper(i+1,s,st,dp)) 
                    return dp[ind]=1;
            }
        }
        return dp[ind]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        set<string> st;
        for(auto it:wordDict){
            st.insert(it);
        }
        vector<int> dp(n+1,-1);
        return helper(0,s,st,dp);
    }
};