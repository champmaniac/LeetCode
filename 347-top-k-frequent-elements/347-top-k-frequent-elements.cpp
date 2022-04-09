class Solution {                       // TC O(n)
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> buckets(n);
        for(auto it = mp.begin();it!=mp.end();it++){
            buckets[it->second-1].push_back(it->first);
        }
        vector<int> sorted;
        for(int i=0;i<n;i++){
            sorted.insert(sorted.end(),buckets[i].begin(),buckets[i].end());
        }
        vector<int> ans(sorted.rbegin(),sorted.rbegin()+k);
        return ans;
    }
};