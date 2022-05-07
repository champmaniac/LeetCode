class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int mini = INT_MIN;
        int n = nums.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<mini) return true;
            else while(!st.empty() && st.top()<nums[i]){
                mini = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};