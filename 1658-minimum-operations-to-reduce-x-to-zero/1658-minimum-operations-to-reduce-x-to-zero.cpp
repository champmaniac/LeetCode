class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        int target = sum-x;
        int cur_sum=0,max_len=0;
        int start_ind=0;
        bool found = false;
        for(int end_ind=0;end_ind<n;end_ind++){
            cur_sum+=nums[end_ind];
            while(start_ind<=end_ind && cur_sum>target){
                cur_sum -=nums[start_ind];
                start_ind+=1;
            }
            if(cur_sum==target){
                found = true;
                max_len = max(max_len,end_ind-start_ind+1);
            }
        }
        return found?n-max_len:-1;
    }
};