class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count =0,i=1;
        while(n>0){
            n-=i;
            if(n%i==0) count++;
            i++;
        }
        return count;
    }
};