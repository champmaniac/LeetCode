class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(auto it:magazine){
            mp[it]++;
        }
        for(auto it:ransomNote){
            if(mp[it]-- <=0){
                return false;
            }
        }
        return true;
    }
};