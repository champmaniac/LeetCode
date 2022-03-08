class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = 0;
        double sum = 0;
        for(int i=0;i<k;i++){
            sum = sum+nums[i];
        }
        double m = sum/k;
        max = m;
        int i =0 , j =k;
        while(j<nums.size()){
            sum = sum-nums[i++]+nums[j++];
            double n = sum/k;
            if(n>max){
                max = n;
            }
        }
        return max;
    }
};