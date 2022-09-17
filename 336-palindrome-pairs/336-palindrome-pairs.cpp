struct TrieNode {
    TrieNode *next[26] = {};
    int index = -1;
    vector<int> palindromeIndexes;
};
class Solution {
    bool isPalindrome(string &s, int i, int j) {
        while (i < j && s[i] == s[j]) ++i, --j;
        return i >= j;
    }
    TrieNode *root;
    void insert(string &s, int index) {
        TrieNode *node = root;
        for (int i = s.size() - 1; i >= 0; i--) {
            int c = s[i] - 'a';
            if (!node->next[c]) {
                node->next[c] = new TrieNode();
            }
            if (isPalindrome(s, 0, i)) {
                node->palindromeIndexes.push_back(index);
            }
            node = node->next[c];
        }
        node->index = index;
        node->palindromeIndexes.push_back(index);
    }
    public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        root = new TrieNode();
        for (int i = 0; i < words.size(); i++) {
            insert(words[i], i);
        }
        vector<vector<int>> result;
        for (int i = 0; i < words.size(); i++) {
            TrieNode *node = root;
            string &s = words[i];
            for (int j = 0; j < s.size(); j++) {
                if (node->index >= 0 && node->index != i && isPalindrome(s, j, s.size() - 1)) {
                    result.push_back({i, node->index});
                }
                node = node->next[s[j] - 'a'];
                if (!node) break;
            }
            if (node) {
                for (int j : node->palindromeIndexes) {
                    if (i == j) continue;
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }
};