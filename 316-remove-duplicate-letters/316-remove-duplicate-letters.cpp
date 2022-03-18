class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length(); // length of string
        vector<bool> vis(123,false); // vector to keep track of visited characters
        vector<int> cnt(123,0); // vector to keep track of count of characters
        string ans="0"; // string to keep track of answer
        for(auto &c:s) cnt[c]++; // increment count of characters
        for(auto &c:s){ // iterate over string
            cnt[c]--; // decrement count of character
            if(vis[c]) continue; // if character is already visited, continue
            while(cnt[ans.back()] && ans.back()>c){ // while last character is greater than current character and count of last character is greater than 0 
                vis[ans.back()]=false; // mark last character as not visited
                ans.pop_back(); // pop last character
            }
            ans+=c; // append current character to answer
            vis[c]=true; // mark current character as visited
        }
        return ans.substr(1); // return answer without first character
    }
};