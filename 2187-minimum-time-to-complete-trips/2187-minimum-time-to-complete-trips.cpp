class Solution {
public:
    static long long find(vector<int> &times,long long time){
        long long ans = 0;
        for(auto it: times) ans+=(time/it);
        return ans;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long tt = 0,mt,ut,l=0;
        sort(time.begin(),time.end());
        mt = time[n-1];
        for(auto t: time) tt+=(mt/t);
        long long upperLimit = ceil((double)totalTrips/(double)tt);
        ut = upperLimit*mt;
        
        long long ans = 0;
        
        while(l<=ut){
            long long mid = l-((l-ut)/2),trips;
            trips = find(time,mid);
            if(trips>=totalTrips) ut = mid-1;
            else l = mid+1;
        }
        
        return ans!=0?min(ans,l):l;
    }
};