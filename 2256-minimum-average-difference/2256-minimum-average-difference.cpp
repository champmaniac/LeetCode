class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long totSum=0;
        for(int num:nums){
            totSum+=num;
        }
        int minAvgDiff = INT_MAX,minAvgDiffId = -1;
        long long preSum=0;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            long long postSum = totSum-preSum;
            int preCount = i+1;
            int postCount = n-preCount;
            int preAvg = preSum/preCount;
            int postAvg = (postCount==0)?0:(postSum/postCount);
            int avgDiff = abs(preAvg-postAvg);
            if(avgDiff<minAvgDiff){
                minAvgDiff=avgDiff;
                minAvgDiffId=i;
            }
        }
        return minAvgDiffId;
    }
};