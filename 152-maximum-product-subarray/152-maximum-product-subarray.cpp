// // TC O(N^2) SC O(1)
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int ans = nums[0], mul;
//         for(int i=0;i<nums.size();i++)
//         {
//             mul= nums[i];
//             ans = max(ans,mul);
//             for(int j= i+1;j<nums.size();j++)
//             {
//                 mul *= nums[j];
//                 ans= max(ans,mul);
//             }
//         }
//         return ans;
//     }
// };
// Space-Optimized using Dp (Tabulation)
// TC O(N) SC O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int dpMin =nums[0],dpMax =nums[0];
        int ans =nums[0];
        for(int i=1;i<n;i++){
            auto prevDpMin = dpMin, prevDpMax = dpMax;
            dpMin=min(nums[i],nums[i]*(nums[i]>=0?prevDpMin:prevDpMax));
            dpMax=max(nums[i],nums[i]*(nums[i]>=0?prevDpMax:prevDpMin));
            ans=max(ans,dpMax);
        }
        return ans;
    }
};