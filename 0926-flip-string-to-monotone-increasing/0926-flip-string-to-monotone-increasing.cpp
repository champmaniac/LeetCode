class Solution {
public:
    int minFlipsMonoIncr(string S) {
        int ones=0,flips=0;
        for(auto c:S){
            if(c=='0'){
                if(ones>0) flips++;
            }
            else ones++;
            flips=min(flips,ones);
        }
        return flips;
    }
};