class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for(int task:tasks){
            mp[task]++;
        }
        int num,freq=0,ans=0;
        for(auto i:mp){
            freq=i.second;
            if(freq==1){
                return -1;
            }
            else if(freq%3==0){
                ans+=freq/3;
            }
            else{
                ans+=freq/3+1;
            }
        }
        return ans;
    }
};