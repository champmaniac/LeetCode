class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else
                mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(mp[nums1[i]]);
        }
        return res;
    }
};