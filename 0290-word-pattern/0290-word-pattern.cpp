class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int> p2i;
        map<string,int> w2i;
        int i=0,n=pattern.size();
        istringstream in(s);
        for(string word;in>>word;i++){
            if(i==n || p2i[pattern[i]]!=w2i[word]){
                return false;
            }
            p2i[pattern[i]]=w2i[word]=i+1;
        }
        return i==n;
    }
};