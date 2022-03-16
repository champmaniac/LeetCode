class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st; // use stack to store the elements in pushed
        for(int i=0,j=0;i<pushed.size();i++){ 
            st.push(pushed[i]); // push the element in pushed
            while(!st.empty()&& st.top()==popped[j]){ // if the top element in stack is equal to the element in popped
                st.pop(); // pop the element
                ++j; // move to the next element in popped
            }
        }
        return st.empty(); // if the stack is empty, then the sequence is valid
    }
};