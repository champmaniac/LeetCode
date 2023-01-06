class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());
        int count=0;
        for(int cost:costs){
            if(coins>=cost){
                count++;
                coins-=cost;
            }
            else return count;
        }
        return count;
    }
};