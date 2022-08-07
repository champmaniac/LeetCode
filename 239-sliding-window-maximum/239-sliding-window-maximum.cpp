class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
    // void getMax(vector<int> &nums,int l,int r,vector<int> &arr){
    //     int maxi = INT_MIN;
    //     for(int i=l;i<=r;i++){
    //         maxi = max(maxi,nums[i]);
    //     }
    //     arr.push_back(maxi);
    // }
    // vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     vector<int> arr;
    //     int l=0,r=0;
    //     while(r<k-1){r++;}
    //     while(r<n){
    //         getMax(nums,l,r,arr);
    //         l++,r++;
    //     }
    //     return arr;
    // }
};