class Solution {
public:
    int calculate(string s) {
        int result=0;
        int sum=0;
        int sign=1;
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                sum=s[i] -'0';
                while(i+1<n && isdigit(s[i+1]))
                {
                    sum = sum*10 + (s[i+1] -'0');
                    i++;
                }
                result+=sum*sign;
            }
            
            else if(s[i] == '+')
            {
                sign=1;
            }
            else if (s[i] == '-')
            {
                sign=-1;
            }
            else if (s[i] == '(')
            {
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            else if(s[i] == ')')
            {
                int xsign=st.top();
                st.pop();
                int xresult= st.top();
                st.pop();
                result=result*xsign + xresult;
            }
        }
        
        return result;
    }
};