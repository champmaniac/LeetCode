class Solution {
public:
    int calculate(string s) {
        s+='+';
        stack<int> st;
        char sign ='+';
        long long int ans=0, cur=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))
               cur = cur*10+(s[i]-'0');
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                if(sign=='+') st.push(cur);
                else if(sign=='-') st.push(cur*(-1));
                else if(sign=='*'){
                    int num = st.top();
                    st.pop();
                    st.push(num*cur);
                }
                else if(sign=='/'){
                    int num = st.top();
                    st.pop();
                    st.push(num/cur);
                }
                cur=0;
                sign=s[i];
            }
        }
        while(st.size()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};