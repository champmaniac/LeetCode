class Solution {
public:
    bool detectCapitalUse(string word) {
        bool AllUpperCase=true;
        for(char c:word){
            if(!isupper(c)){
                AllUpperCase=false;
                break;
            }
        }
        if(AllUpperCase) return true;
        bool AllLowerCase=true;
        for(char c:word){
            if(!islower(c)){
                AllLowerCase=false;
                break;
            }
        }
        if(AllLowerCase) return true;
        if (isupper(word[0])) {
            bool first_uppercase_rest_lowercase = true;
            for (int i = 1; i < word.size(); i++) {
                if (!islower(word[i])) {
                    first_uppercase_rest_lowercase = false;
                    break;
                }
            }
            if (first_uppercase_rest_lowercase) return true;
        }
        // if none of the above conditions are satisfied, return false
        return false;
    }
};