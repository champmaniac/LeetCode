class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>> res;
        permuteHelper(nums,0,res);
        return res;
    }
    void permuteHelper(vector<int> nums,int i,vector<vector<int>> &res)
    {
        if(i==nums.size()) {
            res.emplace_back(nums); 
            return;
        }
        unordered_set<int> s;
        for(int j=i;j<nums.size();j++)
        {
            if(s.count(nums[j])==1) continue;
            s.insert(nums[j]);
            std:: swap(nums[i],nums[j]);
            permuteHelper(nums,i+1,res);
            std:: swap(nums[i],nums[j]);
        }
    }
};