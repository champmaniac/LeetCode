class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n-2;
        int mid;
        while(lo<=hi){
            mid = (lo+hi)>>1;
            if(mid%2==0){ // even
                if(nums[mid]!=nums[mid+1]){
                    hi = mid-1;
                }
                else lo = mid+1;
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    hi = mid-1;
                }
                else lo = mid+1;
            }
        }
        return nums[lo];
    }
};