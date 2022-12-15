class Solution {
public:
    bool helper_not(const string &s,int &i){
        i+=2;
        auto ret= helper(s,i);
        i++;
        return !ret;
    }
    bool helper_and(const string &s,int &i){
        i+=2;
        bool ret=true;
        ret&=helper(s,i);
        while(s[i]!=')'){
            i++;
            ret&=helper(s,i);
        }
        i++;
        return ret;
    }
    bool helper_or(const string &s,int &i){
        i+=2;
        bool ret=false;
        ret|=helper(s,i);
        while(s[i]!=')'){
            i++;
            ret|=helper(s,i);
        }
        i++;
        return ret;
    }
    bool helper(const string &s,int &i){
        if(s[i]=='t'){
            i++;
            return true;
        }
        else if(s[i]=='f'){
            i++;
            return false;
        }
        else if(s[i]=='!'){
            return helper_not(s,i);
        }
        else if(s[i]=='&'){
            return helper_and(s,i);
        }
        return helper_or(s,i);
    }
    bool parseBoolExpr(string exp) {
        int i=0;
        return helper(exp,i);
    }
};