// Using Backtracking
class Solution {
public:
    vector<string> res;
    void solve(int open,int close, int n,string cur){
        if(cur.size()==n*2){ // base condition
            res.push_back(cur);
            return;
        }
        if(open<n) solve(open+1,close,n,cur+'(');
        if(close<open) solve(open,close+1,n,cur+')');
    }
    vector<string> generateParenthesis(int n) {
        solve(0,0,n,"");
        return res;
    }
};