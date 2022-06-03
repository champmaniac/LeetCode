class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> sum;
        for(int x=0;x<n;x++){
            int l = 0, r = n-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(nums[mid]==target-nums[x]){
                    if(mid==x)
                        l=mid+1;
                    else{ 
                        sum ={x+1,mid+1}; // since we need to return indices
                        return sum;
                    }
                }
                else if(nums[mid]<target-nums[x])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return sum;
    }
};