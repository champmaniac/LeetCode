class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<vector<int>>vec(n);
        int vecp=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            vec[i]={capital[i],profits[i]};
        }
        sort(vec.begin(),vec.end());
        while(vecp<n && vec[vecp][0]<=w){
            pq.push(vec[vecp][1]);
            vecp++;
        }
        while(!pq.empty() && k--){
            w+=pq.top();
            pq.pop();
            while(vecp<n && vec[vecp][0]<=w){
                pq.push(vec[vecp][1]);
                vecp++;
            }
        }
        return w;
    }
};