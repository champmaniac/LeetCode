class Solution {
public:
    string decodeString(string s) {
        int pos =0;
        return solve(pos,s);
    }
    string solve(int &pos,string s){
        int num=0;
        string word ="";
        for(;pos<s.size();pos++){
            char cur = s[pos];
            if(cur=='['){
                string curStr = solve(++pos,s);
                for(;num>0;num--) word+=curStr;
            }else if(cur>='0' && cur<='9'){
                num = num*10+cur-'0';
            }
            else if (cur == ']') {
                return word;
            } else {    // Normal characters
                word += cur;
            }
        }
        return word;
    }
};