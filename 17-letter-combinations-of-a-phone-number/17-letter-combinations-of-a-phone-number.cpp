class Solution {
public:
    vector<string> mappings ={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="") return ans;  // no combinations formed without any digits
        solve(digits,0,"");
        return ans;
    }
    void solve(string &digits,int ind, string combi){
        if(ind==digits.size())
            ans.push_back(combi);
        else
        {
            for(auto c:mappings[digits[ind]-'2']){
                solve(digits,ind+1,combi+c);
            }
        }
    }
};