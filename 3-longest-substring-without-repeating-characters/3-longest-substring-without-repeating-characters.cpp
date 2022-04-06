class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int store[256]={0}; //array to store the occurences of all the characters
        int l=0; // left pointer
        int r=0; // right pointer
        int ans=0; // intialising the length as 0
        int n = s.size();
        while(r<n){ //iterate over the string till the right pointer reaches the end of the string 
            store[s[r]]++; // increment the count of the character present in the right pointer
            while(store[s[r]]>1){ // if occurance is >1 it means the character is repeated
                store[s[l]]--; // reduce the occurance of left pointer as it might be present ahead also in the string  
                l++; // increment the left pointer
            }
            ans = max(ans,r-l+1); // as index starts from 0, so the ans = (right pointer-left pointer+1)
            r++; // increment the right pointer
        }
        return ans;
    }
};