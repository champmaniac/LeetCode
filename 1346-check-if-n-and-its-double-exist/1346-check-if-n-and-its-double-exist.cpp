class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        for(int n:arr){
            if(st.count(2*n)>0 || !(n%2) && st.count(n/2)) return true;
            st.insert(n);
        }
        return false;
    }
};