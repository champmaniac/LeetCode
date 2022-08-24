class Solution {                        // 3^19 --> 1162261467
public:
    bool isPowerOfThree(int n) {
        return (n > 0) && ((int)(pow(3, 19)) % n == 0);
    }
};