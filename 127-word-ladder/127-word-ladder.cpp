class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st;
        bool isPresent = false;
        for(auto word:wordList){
            if(endWord.compare(word)==0)
                isPresent = true;
            st.insert(word);
        }
        if(isPresent==false) return 0;
        queue<string> q;
        q.push(beginWord);
        int level = 0;
        while(!q.empty()){
            level+=1;
            int sz = q.size();
            while(sz--){
                string top = q.front();
                q.pop();
                for(int i=0;i<top.size();i++){
                    string temp = top;
                    for(char c='a';c<='z';c++){
                        temp[i]=c;
                        if(top.compare(temp)==0) continue;
                        if(temp.compare(endWord)==0) return level+1;
                        if(st.find(temp)!=st.end()){
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};