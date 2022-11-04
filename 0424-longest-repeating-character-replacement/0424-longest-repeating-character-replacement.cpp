class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxfreq=0,ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            maxfreq = max(maxfreq,++mp[s[i]]);
            if(ans-maxfreq<k){
                ans++;
            }
            else{
                mp[s[i-ans]]--;
            }
        }
        return ans;
    }
};