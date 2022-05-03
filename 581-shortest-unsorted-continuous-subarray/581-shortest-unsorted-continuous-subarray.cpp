class Solution {
public: 
    int findUnsortedSubarray(vector<int>& nums) {               // TC ---> O(n+n+n+n) == O(4n) == O(n)
        int minval=INT_MAX,maxval=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){                       // Sc ---> O(1)
            if(nums[i]>nums[i+1]){
                minval=min(minval,nums[i+1]);
            }
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<nums[i-1]){
                maxval=max(maxval,nums[i-1]);
            }
        }
        int l=0,r=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>minval){
                l=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<maxval){
                r=i;
                break;
            }
        }
        return r-l>0?r-l+1:0;
    }
};