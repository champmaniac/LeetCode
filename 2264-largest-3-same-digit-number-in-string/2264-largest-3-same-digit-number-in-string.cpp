class Solution {
public:
    string largestGoodInteger(string num) {
        char ans=0;
        for(int i=2;i<num.size();i++){
            if(num[i-2]==num[i-1] && num[i-1]==num[i])
                ans = max(ans,num[i]);
        }
        if(ans==0) return "";
        else return string(3,ans);
    }
};