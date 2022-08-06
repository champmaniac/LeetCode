class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        map<int,long long>mp;
        long long day=0;
        for(int task:tasks){
            ++day;
            if(mp.find(task)!=mp.end()){
                long long prev = mp[task];
                day = max(day,prev+space+1);
            }
            mp[task]=day;
        }
        return day;
    }
};