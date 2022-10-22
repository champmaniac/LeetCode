class Solution {
public:
    bool helper(int i,string s,set<string>&st,int n,vector<int>&dp){
        if(i==n) return 1;
        if(dp[i]!=-1) return dp[i];
        string temp;
        for(int j=i;j<n;j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()){
                if(helper(j+1,s,st,n,dp)) return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        set<string>st;
        for(auto &it:wordDict){
            st.insert(it);
        }
        vector<int> dp(n+1,-1);
        return helper(0,s,st,n,dp);
    }
};