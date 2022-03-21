class Solution {
public:
    vector<int> partitionLabels(string s) {
        int mp[256]{0};
        vector<int> out;
        
        for(int i{0}; i<size(s); ++i) mp[s[i]]=i;
        
        for(int i{0},j{-1},maxi{0};i<s.size();++i){
            if((maxi=max(maxi,mp[s[i]]))==i){
                out.push_back(i-j),j=i;
            }
        }
        return out;
    }
};