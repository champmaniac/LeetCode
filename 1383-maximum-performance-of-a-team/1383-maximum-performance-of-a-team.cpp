class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod = (int)1e9+7;
        // to maintain the top k-1 engineers
        priority_queue<int,vector<int>,greater<int>> pq;
        
        long long ans=0;
        
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({efficiency[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        long long topSum=0;
        for(int i=0;i<n;i++){
            int cur_min = v[i].first;
            long long speedSum = 1LL*v[i].second+topSum;
            ans = max(ans,1LL*speedSum*cur_min);
            pq.push(v[i].second);
            
            
            topSum+=1LL*v[i].second;
            if(pq.size()>k-1){
                topSum-=1LL*pq.top();
                pq.pop();
            }
        }
        ans%=mod;
        return ans;
    }
};