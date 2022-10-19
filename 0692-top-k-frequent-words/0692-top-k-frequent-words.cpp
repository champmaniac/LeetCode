class Solution {                                  // O(nlogk)
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };   
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto n:words){
            mp[n]++;
        }
        vector<string> res;
        // pair<first, second>: first is frequency,  second is string
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it = mp.begin(); it != mp.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > k) pq.pop();
        }
        while(!pq.empty()){
                res.insert(res.begin(),pq.top().second);
                pq.pop();
            }
        return res;
    }
};