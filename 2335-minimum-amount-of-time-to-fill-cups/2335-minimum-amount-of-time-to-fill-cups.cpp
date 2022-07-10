class Solution {
public:
    int fillCups(vector<int>& amount) {
        int maxi =0, sum=0;
        for(auto &m:amount){
            maxi = max(maxi,m);
            sum+=m;
        }
        return max(maxi,(sum+1)/2);
    }
};