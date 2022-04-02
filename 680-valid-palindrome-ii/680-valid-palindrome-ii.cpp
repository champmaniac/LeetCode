class Solution {         // d: num of characters we can delete at most
public: 
    bool validPalindrome(string s) {
        return valid(s,0,s.size()-1,1);
    }
private:
    bool valid(string& s,int i,int j,int d){
        if(i>=j) return true;
        if(s[i]==s[j])
            return valid(s,i+1,j-1,d);
        else
            return d>0 && (valid(s,i+1,j,d-1) || valid(s,i,j-1,d-1));
    }
};