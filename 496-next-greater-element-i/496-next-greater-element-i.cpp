class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int n:nums){
            while(st.size() && st.top()<n){
                mp[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        vector<int> res;
        for(int it:findNums){
            res.push_back(mp.count(it)?mp[it]:-1);
        }
        return res;
    }
};