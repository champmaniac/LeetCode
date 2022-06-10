class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		unordered_set<char> set;
		int i = 0, j = 0, n = s.size(), ans = 0;
		while(j<n){
			if(set.find(s[j]) == set.end()){ //If the character does not in the set
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else{
				//If character does exist in the set, ie. it is a repeated character, 
				//we update the left side counter i, and continue with the checking for substring. 
				set.erase(s[i++]); 
			}
		}
		return ans;
	}
};