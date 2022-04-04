class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if(n==0) return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target_3=target-nums[i];
            for(int j=i+1;j<n;j++){
                int target_2 = target_3-nums[j];
                int start = j+1;
                int end = n-1;
                while(start<end){
                    int two_sum = nums[start]+nums[end];
                    if(two_sum<target_2) start++;
                    else if(two_sum>target_2) end--;
                    else{
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[start];
                        quadruplet[3] = nums[end];
                        res.push_back(quadruplet);
                        while (start < end && nums[start] == quadruplet[2]) ++start;
                        while (start < end && nums[end] == quadruplet[2]) --end;
                    }
                }
                while(j+1<n && nums[j + 1] == nums[j]) ++j;
            }
            while(i+1<n && nums[i + 1] == nums[i]) ++i;
        }
        return res;
    }
};