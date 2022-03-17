class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int cur =0;
        for(char i:s){
            if(i=='('){
                st.push(cur);
                cur=0;
            }
            else{
                cur+=st.top()+max(cur,1);
                st.pop();
            }
        }
        return cur;
    }
};