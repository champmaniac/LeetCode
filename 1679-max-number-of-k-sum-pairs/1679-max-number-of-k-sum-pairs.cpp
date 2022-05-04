class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int ans =0;
        for(int cur:nums){
            int complement = k-cur;
            if(freq[complement]>0){
                ans++;
                freq[complement]--;
            }
            else freq[cur]++;
        }
        return ans;
    }
};