#define ll long long 
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="+" && tokens[i]!="-"){
                st.push(stoi(tokens[i]));
                continue;
            }
            else{
                ll firstTop = st.top();
                st.pop();
                ll secondTop = st.top();
                st.pop();
                
                if(tokens[i]=="+"){
                    st.push(secondTop+firstTop);
                }
                else if(tokens[i]=="-"){
                    st.push(secondTop-firstTop);
                }
                else if(tokens[i]=="*"){
                    st.push(secondTop*firstTop);
                }
                else{
                    st.push(secondTop/firstTop);
                }
            }
        }
        return st.top();
    }
};