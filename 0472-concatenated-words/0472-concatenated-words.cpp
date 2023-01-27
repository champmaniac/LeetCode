class Solution {
public:
    struct trie{
        trie* child[26];
        bool isend;
    };
    trie* root;
    trie* getnode(){
        trie* node=new trie;
        for(int i=0;i<26;i++){
            node->child[i]=NULL;
        }
        node->isend=false;
        return node;
    }
    void addword(string s){
        trie *cur=root;
        for(int i=0;i<s.length();i++){
            if(!cur->child[s[i]-'a'])cur->child[s[i]-'a']=getnode();
            cur=cur->child[s[i]-'a'];
        }
        cur->isend=true;
    }
    bool search(string w) {
        trie* cur=root;
        for(int i=0;i<w.length();i++){
            if(!cur->child[w[i]-'a'])return false;
            cur=cur->child[w[i]-'a'];
        }
        return (cur!=NULL && cur->isend);
    }
    vector<string> res;
    bool sol(string word, int count){
        if(count>1 && search(word))return true;
        for(int j=0;j<word.length()-1;j++){
            string left=word.substr(0,j+1);
            string right=word.substr(j+1);
            if(search(left) && sol(right, count+1)) return true;
            
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        root=getnode();
        bool flag=false;
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(words[i]=="")continue;
            addword(words[i]);
            
        }
        for(auto &w:words){
            if(w=="")continue;
            if(sol(w,1))ans.push_back(w);
        }
        return ans;
    }
};
