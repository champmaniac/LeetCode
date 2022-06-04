class Solution {
public:
    long mod =1e9+7;
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        long s1=0,s2=0, n = nums1.size(), m = nums2.size();
        long res=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                s1+=nums1[i++];
            }
            else if(nums1[i]>nums2[j]){
                s2+=nums2[j++];
            }
            else{
                res+=max(s1,s2)+nums1[i];
                i++,j++,s1=0,s2=0;
            }
        }
        while(i<n){
            s1+=nums1[i++];
        }
        while(j<m){
            s2+=nums2[j++];
        }
        return (max(s1,s2)+res)%mod;
    }
};