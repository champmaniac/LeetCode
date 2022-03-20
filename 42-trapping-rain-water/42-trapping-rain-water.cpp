class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n), rightMax(n);
        for(int i=1;i<n;++i){
            leftMax[i] = max(leftMax[i-1],height[i-1]);
        }
        for(int j=n-2;j>=0;--j){
            rightMax[j] = max(rightMax[j+1],height[j+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int waterLevel = min(leftMax[i],rightMax[i]);
            if(waterLevel>=height[i])
                ans+=waterLevel-height[i];
        }
        return ans;
    }
};