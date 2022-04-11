class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int maxVal = -1;
                    for(int k=j;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            maxVal = nums2[k];
                            break;
                        }
                    }
                    res.push_back(maxVal);
                }
            }
        }
        return res;
    }
};