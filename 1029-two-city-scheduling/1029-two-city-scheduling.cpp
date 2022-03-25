class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> refund;
        int n = costs.size()/2;
        int minCost =0;
        for(vector<int> cost:costs){
            minCost += cost[0];
            refund.push_back(cost[1]-cost[0]);
        }
        sort(refund.begin(),refund.end());
        for(int i=0;i<n;i++){
            minCost+=refund[i];
        }
        return minCost;;
    }
};