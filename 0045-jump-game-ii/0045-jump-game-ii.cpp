class Solution {
public:
    int jump(vector<int>& nums) {
        int curReach=0,curMax=0,jumps=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(i+nums[i]>curMax)
                curMax=i+nums[i];
            if(i==curReach){
                jumps++;
                curReach = curMax;
            }
        }
        return jumps;
    }
};