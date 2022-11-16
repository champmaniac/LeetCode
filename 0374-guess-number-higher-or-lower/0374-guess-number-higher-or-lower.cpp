class Solution {
public:
    int guessNumber(int n, long s = 1){
        while (s <= n){
            int x = (n + s) / 2;        // here, a conversion long -> int -> long happens
            int g = guess(x);
            if (g == 0) return x;
            if (g < 0)  n = x - 1;
            if (g > 0)  s = x + 1;
        }
        return -1;                   // unreachable (we should have found the number by now)
    }
};