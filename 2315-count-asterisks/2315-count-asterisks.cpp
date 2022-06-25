class Solution {
public:
    int countAsterisks(string s) {
        int var=0;
        int res=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='|') var = 1-var;
            if(var==0){
                if(s[i]=='*') res++;
            }
        }
        return res;
    }
};