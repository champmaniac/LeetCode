class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        for(auto &it:nums){
            if(mp[it]==0){
                continue;
            }
            int freq=mp[it],cur=it,count=0;
            while(mp.count(cur) && mp[cur]>=freq){
                freq = max(freq,mp[cur]);
                mp[cur]--;
                count++;
                cur++;
            }
            if(count<3) return false;
        }
        return true;
    }
};