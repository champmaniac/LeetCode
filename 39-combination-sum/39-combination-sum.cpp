class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int> &C, int t,vector<int> &sol){
        if(t==0) {
            ans.push_back(sol);
            return;
        }
        if(t<0) return;
        if(i==C.size()) return;
        // skip the ith element
        solve(i+1,C,t,sol);
        sol.push_back(C[i]);
        // pick the ith element
        solve(i,C,t-C[i],sol);
        sol.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sol;
        solve(0,candidates,target,sol);
        return ans;
    }
};