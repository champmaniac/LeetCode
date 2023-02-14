class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        string ret="";
        int carry=0;
        while(i>=0 || j>=0 || carry!=0){
            if(i>=0)
            {
                carry+=a[i]=='0'?0:1;
                i--;
            }
            if(j>=0)
            {
                carry+=b[j]=='0'?0:1;
                j--;
            }
            ret = ((carry%2)==0?"0":"1") +ret;
            carry/=2;
        }
        return ret;
    }
};