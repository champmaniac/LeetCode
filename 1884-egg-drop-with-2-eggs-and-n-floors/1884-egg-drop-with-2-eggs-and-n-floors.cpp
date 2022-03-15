class Solution {
public:
    int twoEggDrop(int n) {
        auto out{0};
        for(auto i{0}; n--; ++i>out ? out=i, i=1 : 0);           
        return out;   
    }
};