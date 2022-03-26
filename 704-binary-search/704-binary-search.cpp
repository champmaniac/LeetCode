class Solution { // TC O(logn)
public: 
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            for(int i=0;i<n;i++){
                if(nums[mid]<target)
                    l=mid+1;
                else if(nums[mid]>target)
                    r=mid-1;
                else
                    return mid;
            }
        }
        return -1;
    }
};