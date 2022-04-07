class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(begin(stones), end(stones));
        while (pq.size() > 1) {
            auto w1 = pq.top(); pq.pop();
            auto w2 = pq.top(); pq.pop();
            if (w1 - w2 > 0) pq.push(w1 - w2);
        }
        return pq.empty() ? 0 : pq.top();
    }
};