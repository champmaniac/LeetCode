class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1 ) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1 ) return INT_MIN;
    
    int ans = 0, sign = dividend > 0 == divisor > 0 ? 1 : -1;
    if (divisor == -INT_MAX) return dividend == divisor;
    if (dividend == -INT_MAX)
        if (divisor == 1) return -INT_MAX;
        else if (divisor == -1) return INT_MAX;
        else dividend += abs(divisor), ans++;
    long numerator = abs(dividend), denominator = abs(divisor);
    for (int i = 0; numerator >= denominator; i = 0) {
        while (numerator >> i >= denominator) i++;
        numerator -= denominator << i - 1, ans += 1 << i - 1;
    }
    return sign < 0 ? -ans : ans; 
    }
};