class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        recurPermute(nums,0,res);
        return res;
    }
    void recurPermute(vector<int> &nums,int ind,vector<vector<int>> &res){
        if(ind>=nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            recurPermute(nums,ind+1,res);
            swap(nums[ind],nums[i]);
        }
    }
};