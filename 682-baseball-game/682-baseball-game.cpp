class Solution {
public:
    int calPoints(vector<string>& ops) {
        int val1,val2,ans=0;
        stack<int> st;
        for(string i:ops){
            if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                st.push(st.top()*2);
            }
            else if(i=="+"){
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.push(val1);
                st.push(val1+val2);
            }
            else{
                st.push(stoi(i));
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};