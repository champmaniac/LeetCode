class Solution {
public:
    void helper(int i,vector<int>candidates,int target,vector<int>&sol,vector<vector<int>>&ans){
        int n = candidates.size();
        if(target==0){
            ans.push_back(sol);
            return;
        }
        if(target<0) return;
        if(i==n) return;
        helper(i+1,candidates,target,sol,ans);
        // pick
        sol.push_back(candidates[i]);
        helper(i,candidates,target-candidates[i],sol,ans);
        sol.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sol;
        helper(0,candidates,target,sol,ans);
        return ans;
    }
};