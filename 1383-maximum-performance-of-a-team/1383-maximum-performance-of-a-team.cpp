class Solution {
public:
    const int mod = (int)1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        // to maintain the top k-1 engineers
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({efficiency[i],speed[i]});
        }
        // sorting in decreasing order.
        sort(v.rbegin(),v.rend());
        long totSpeed=0,ans=0;
        for(int i=0;i<n;i++){
            int curSpeed = v[i].second;
            totSpeed+=curSpeed;
            pq.push(curSpeed);
            if(pq.size()>k){
                totSpeed-=pq.top();
                pq.pop();
            }
            int minEfficiency = v[i].first;
            ans = max(ans,totSpeed*minEfficiency);
        }
        return ans%mod;
    }
};