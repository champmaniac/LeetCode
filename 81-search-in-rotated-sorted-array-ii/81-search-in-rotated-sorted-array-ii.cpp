class Solution {
public:
    bool solve(vector<int> & nums, int target, int start , int end)
    {
        if(start>end) return false;
        int mid = start+(end-start)/2;
        if(nums[mid]==target) return true;
        if(nums[start]<target && target<nums[mid])
            return solve(nums,target,start,mid-1);
        if(nums[mid]<target && target<nums[end])
            return solve(nums,target,mid+1,end);
        return solve(nums,target,start,mid-1) || solve(nums,target,mid+1,end);
    }
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(nums,target,0,n-1);
    }
};