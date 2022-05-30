class Solution {
public:
    int divide(int dividend, int divisor) {
        long long result=0;
        long long m=abs((long long)dividend);
        long long n=abs((long long)divisor);
        while(m>=n){
            long long s=n, power=1;
            while((s<<1) <= m){ 
                s<<=1; power<<=1; 
            }
            result+=power;
            m-=s;
        }
        
        if( (dividend>0) ^ (divisor>0))  result = -result;
        return result>INT_MAX ? INT_MAX:result;
    }
};