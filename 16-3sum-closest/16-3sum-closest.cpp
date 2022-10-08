class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int res = nums[0]+nums[1]+nums[n-1];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int cur_sum = nums[i]+nums[j]+nums[k];
                if(cur_sum>target){
                    k-=1;
                }
                else{
                    j+=1;
                }
                if(abs(cur_sum-target)<abs(res-target)){
                    res=cur_sum;
                }
            }
        }
        return res;
    }
};