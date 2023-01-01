class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        // check if s follows the pattern
        if (pattern.size() != words.size()) {
            return false;
        }
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            if (char_to_word.count(c) && char_to_word[c] != w) {
                return false;
            }
            if (word_to_char.count(w) && word_to_char[w] != c) {
                return false;
            }
            char_to_word[c] = w;
            word_to_char[w] = c;
        }
        return true;
    }
};