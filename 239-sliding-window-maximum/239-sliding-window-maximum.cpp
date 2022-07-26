class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()==i-k) dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
    
    // Brute Force ----> TC O(N^2) SC -O(K)
    // vector<int> getMax(vector<int> &nums, int l,int r,vector<int> &arr){
    //     int maxi = INT_MIN;
    //     for(int i=l;i<=r;i++){
    //         maxi = max(maxi,nums[i]);
    //     }
    //     arr.push_back(maxi);
    //     return arr;
    // }
    // vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     int l=0, r=0;
    //     vector<int> arr;
    //     while(r<k-1) r++;
    //     while(r<n){
    //         getMax(nums,l,r,arr);
    //         l++, r++;
    //     }
    //     return arr;
    // }
};