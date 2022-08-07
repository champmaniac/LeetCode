class Solution {
public:
    int ladderLength(string start, string end, vector<string>& wordList) {
        queue<string>q;
        q.push(start);
        int wordSize = start.size();
        
        unordered_set<string> word;
        for(int i=0;i<wordList.size();i++){
            word.insert(wordList[i]);
        }
        if(word.find(end)==word.end()) return 0;
        int len=0;
        while(!q.empty()){
            len++;
            int qLen = q.size();
            for(int i=0;i<qLen;i++){
                string s= q.front();
                q.pop();
                
                for(int j=0;j<wordSize;j++){
                    char org=s[j];
                    for(char ch='a';ch<='z';ch++){
                        s[j]=ch;
                        if(s==end) return len+1;
                        if(word.find(s)==word.end()) continue;
                        
                        word.erase(s);
                        q.push(s);
                    }
                    s[j]=org;
                }
            }
        }
        return 0;
    }
};