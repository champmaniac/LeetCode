class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0) return 0;
        if(num==1) return 1;
        return numberOfSteps(num/2)+(num%2==0?1:2);
    }
};