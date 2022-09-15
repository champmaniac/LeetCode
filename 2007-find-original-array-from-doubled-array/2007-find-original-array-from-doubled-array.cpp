class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto &it:changed) mp[it]++;
        sort(changed.begin(),changed.end());
        for(auto &x:changed){
            if(mp[x]>0){
                mp[x]--;
                if(mp[x*2]>0){
                    ans.push_back(x);
                    mp[x*2]--;
                }
                else return {};
            }
        }
        return ans;
    }
};