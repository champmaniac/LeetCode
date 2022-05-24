class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char,int>> st;
        int longVal=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push({'(',i});
            else{
                if(!st.empty() && st.top().first=='('){
                    longVal = max(longVal, i-st.top().second+1);
                    st.pop();
                    if(!st.empty()){
                        longVal = max(longVal,i-st.top().second);
                    }
                    else
                        longVal = max(longVal,i+1);
                }
                else
                    st.push({')',i});
            }
        }
        return longVal;
    }
};