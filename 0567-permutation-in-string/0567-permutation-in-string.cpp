class Solution {  //TC O(N) SC O(1) --- >TC O(26)
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1_freq(26,0);
        vector<int> s2_freq(26,0);
        if(s1.size()>s2.size())
            return false;
        // check if the frequency of s1 is there in s2 with a window size equal to s1
        
        int i=0;
        for(;i<s1.size();i++){
            // compute the frequency of each char for the first window
            ++s1_freq[s1[i]-'a'];
            ++s2_freq[s2[i]-'a'];
        }
        if(s1_freq==s2_freq)
            return true;
        // search the remaining windows
        for(;i<s2.size();i++){
            // remove the first char of current window and add the current char
            --s2_freq[s2[i-s1.size()]-'a'];
            ++s2_freq[s2[i]-'a'];
            if(s1_freq==s2_freq)
            return true;
        }
        return false;
        
    }
};