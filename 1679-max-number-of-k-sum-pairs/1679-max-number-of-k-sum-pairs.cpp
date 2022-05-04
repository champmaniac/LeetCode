class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n  =nums.size();
        int left = 0;
        int right = n-1;
        int count=0;
        while(left<right && nums[left]<k){
            if(nums[left]+nums[right]<k) left++;
            else if(nums[left]+nums[right]>k) right--;
            else {
                left++;
                right--;
                count++;
            }
        }
        return count;
    }
    // int maxOperations(vector<int>& nums, int k) {
    //     unordered_map<int,int> freq;
    //     int ans =0;
    //     for(int cur:nums){
    //         int complement = k-cur;
    //         if(freq[complement]>0){
    //             ans++;
    //             freq[complement]--;
    //         }
    //         else freq[cur]++;
    //     }
    //     return ans;
    // }
};