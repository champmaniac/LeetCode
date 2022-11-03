class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        st.erase(beginWord);
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            string word = it.first;
            int len = it.second;
            if(word==endWord) return len;
            for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        q.push({word,len+1});
                    }
                }
                word[i]=original;
            }
         }
        return 0;
    }
};