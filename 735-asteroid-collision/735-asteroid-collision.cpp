class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(auto i:asteroids){
            if(i>0){
                st.push_back(i);
            }
            else{
                while(!st.empty() && st.back()>0 && st.back()<abs(i)) st.pop_back();
                if(st.empty() || st.back()<0) st.push_back(i);
                else if(st.back()==-i) st.pop_back();
            }
        }
        return st;
    }
};