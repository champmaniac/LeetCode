//TC O(N)
class Solution {
public:
    string gcdOfStrings(string a, string b) {
        return (a+b==b+a)? a.substr(0,gcd(a.size(),b.size())):"";
    }
};