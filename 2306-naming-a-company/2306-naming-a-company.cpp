class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string>groups[26];
        for(auto it:ideas){
            groups[it[0]-'a'].insert(it.substr(1));
        }
        long ans=0;
        for(int i=0;i<25;++i){
            for(int j=i+1;j<26;++j){
                long mutual=0;
                for(auto ideaA:groups[i]){
                    if(groups[j].count(ideaA)){
                        mutual++;
                    }
                }
                ans+=2*(groups[i].size()-mutual)*(groups[j].size()-mutual);
            }
        }
        return ans;
    }
};