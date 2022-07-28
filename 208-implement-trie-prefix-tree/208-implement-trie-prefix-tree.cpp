class TrieNode{
public:
    bool isEnd;
    TrieNode *child[26];
    TrieNode(){
        isEnd = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* parent = root;
        int n = word.size(); 
        for(int i=0;i<n;i++){
            int val = word[i]-'a';
            if(parent->child[val]==NULL){
                parent->child[val] = new TrieNode();
            }
            parent = parent->child[val];
        }
        parent->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* parent = root;
        int n = word.size();
        for(int i=0;i<n;i++){
            int val = word[i]-'a';
            if(parent->child[val]==NULL){
                return false;
            }
            parent = parent->child[val];
        }
        return parent->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* parent = root;
        int n = prefix.size();
        for(int i=0;i<n;i++){
            int val = prefix[i]-'a';
            if(parent->child[val]==NULL){
                return false;
            }
            parent = parent->child[val];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */