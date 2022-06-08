class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mid,prev,next;
        int lo=0,hi=n-1;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            prev = (mid+n-1)%n;
            next = (mid+1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next])
                return nums[mid];
            else if(nums[mid]>nums[hi]) lo = mid+1;
            else hi = mid-1;
        }
        return -1;
    }
};