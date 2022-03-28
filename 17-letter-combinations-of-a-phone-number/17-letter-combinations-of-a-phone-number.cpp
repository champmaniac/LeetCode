class Solution {
public:
    vector<string> mappings ={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="") return ans;  // no combinations formed without any digits
        string combination ="";
        solve(digits,0,combination);
        return ans;
    }
    void solve(string &digits,int ind, string &combi){
        if(ind==digits.size()){
            ans.push_back(combi);
            return;
        }
        for(auto c:mappings[digits[ind]-'2']){
            combi.push_back(c);
            solve(digits,ind+1,combi);
            combi.pop_back();
        }
    }
};