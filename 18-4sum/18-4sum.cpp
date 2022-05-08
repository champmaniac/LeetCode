class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        if(n==0) return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int t_3 = target-nums[i];
            for(int j=i+1;j<n;j++){
                int t_2 = t_3-nums[j];
                int start = j+1;
                int end = n-1;
                while(start<end){
                    int two_sum = nums[start]+nums[end];
                    if(t_2>two_sum) start++;
                    else if(t_2<two_sum) end--;
                    else{
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[start];
                        quad[3] = nums[end];
                        res.push_back(quad);
                        while(start<end && nums[start]==quad[2]) ++start;
                        while(start<end && nums[end] == quad[2]) --end;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return res;
    }
};