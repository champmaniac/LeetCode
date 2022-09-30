class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>> h;
        for(auto b:buildings){
            h.push_back({b[0],-b[2]});
            h.push_back({b[1],b[2]});
        }
        sort(h.begin(),h.end());
        int prev=0,cur=0;
        multiset<int> st;
        vector<vector<int>> res;
        st.insert(0);
        for(auto it:h){
            if(it.second<0){
                st.insert(-it.second);
            }
            else{
                st.erase(st.find(it.second));
            }
            cur = *st.rbegin();
            if(cur!=prev){
                res.push_back({it.first,cur});
                prev=cur;
            }
        }
        return res;
    }
};