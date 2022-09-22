class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
        return s;
    }
};