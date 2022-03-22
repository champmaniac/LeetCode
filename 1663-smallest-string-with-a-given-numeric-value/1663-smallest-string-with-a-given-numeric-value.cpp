class Solution {
public:
    string getSmallestString(int n, int k) {
        string res = string(n, 'a'); // generate the initial string with n 'a'
        k -= n; // k is the number of remaining moves which is reduced by n
        while (k > 0) { // while there are remaining moves
            res[--n] += min(25, k); // move the last character to the left
            k -= min(25, k); // reduce the remaining moves by the number of moves that the last character can move
        }
        return res; // return the result
    }
};