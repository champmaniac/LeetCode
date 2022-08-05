class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n =nums.size();
        vector<int> ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n])
                st.pop();
            if(i<n){
                if(!st.empty()){
                    ans[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};