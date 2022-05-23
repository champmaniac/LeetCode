class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double,int>> workers;
        for(int i=0;i<n;i++){
            workers.push_back({(double)wage[i]/quality[i],quality[i]});
        }
        sort(workers.begin(),workers.end());
        double sum=0,ans;
        priority_queue<int> minQualities;
        for(int i=0;i<k;i++){
            sum+=workers[i].second;
            minQualities.push(workers[i].second);
        }
        ans = sum* workers[k-1].first;
        for(int i=k;i<n;i++){
            int maxQualities = minQualities.top();
            if(maxQualities>workers[i].second){
                minQualities.pop();
                minQualities.push(workers[i].second);
                sum+=workers[i].second-maxQualities;
            }
            ans = min(ans, sum*workers[i].first);
        }
        return ans;
    }
};