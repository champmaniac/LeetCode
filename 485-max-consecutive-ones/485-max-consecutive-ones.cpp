class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt =0,cnt=0;
        for(auto i:nums){
            if(i==1){
                cnt++;
                max_cnt=max(max_cnt,cnt);
            }
            else
                cnt=0;
        }
        return max_cnt;
    }
};