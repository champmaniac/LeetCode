class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());   // TC O(NlongN)
        // return nums[nums.size()-k];
        
        priority_queue<int,vector<int>, greater<int>> pq;   // TC O(N)
        for(int i:nums)
        {
            pq.push(i);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};