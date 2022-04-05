class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int water =0;
        int i =0,j=n-1;
        while(i<j){
            int h = min(height[i],height[j]);
            water = max(water,(j-i)*h);
            while(height[i]<=h && i<j) i++;
            while(height[j]<=h && i<j) j--;
        }
        return water;
    }
};