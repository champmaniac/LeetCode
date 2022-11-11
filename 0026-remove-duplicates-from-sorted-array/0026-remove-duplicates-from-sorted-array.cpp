class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0,n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                count++;
            else
                nums[i-count]=nums[i];
        }
        return n-count;
    }
};