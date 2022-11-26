class Solution {
public:
    int getNextJob(vector<vector<int>>& jobs, int idx, const int& n){
        int lo = idx+1, hi = n-1, ans = n;
        while(lo <= hi) {
            int mid = (lo + hi) >> 1;
            if(jobs[idx][1] <= jobs[mid][0])
            {
                ans = mid;
                hi = mid-1;
            }
            else lo = mid + 1;
        }
        return ans;
    }
    static bool compare(const vector<int>&a,const vector<int>&b){
        return a[0]<b[0];
    }
    unordered_map<int,int>dp;
    int maxProfit(vector<vector<int>>&jobs,int ind,const int&n){
        if(ind==n) return 0;
        if(dp.find(ind)!=dp.end()) return dp[ind];
        int next = getNextJob(jobs,ind,n);
        int incl = jobs[ind][2]+maxProfit(jobs,next,n);
        int excl = maxProfit(jobs,ind+1,n);
        return dp[ind]=max(incl,excl);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>>jobs(n,vector<int>(3));
        for(int i=0;i<n;i++){
            jobs[i][0]=startTime[i];
            jobs[i][1]=endTime[i];
            jobs[i][2]=profit[i];
        }
        sort(jobs.begin(),jobs.end(),compare);
        return maxProfit(jobs,0,n);
    }
};