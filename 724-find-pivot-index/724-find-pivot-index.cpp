class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0) return -1;
        int n = nums.size();
        vector<int> l(n),r(n);
        l[0] = nums[0];
        r[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            l[i]=nums[i]+l[i-1];
            r[n-i-1]=nums[n-1-i]+r[n-i];
        }
        for(int i=0;i<n;i++){
            if(l[i]==r[i]) return i;
        }
        return -1;
    }
};