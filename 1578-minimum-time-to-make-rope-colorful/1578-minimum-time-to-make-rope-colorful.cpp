class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int n = s.size(), res=0,max_cost=0,sum_cost=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 && s[i]!=s[i-1]){
                res+=sum_cost-max_cost;
                max_cost=sum_cost=0;
            }
            sum_cost+=cost[i];
            max_cost=max(max_cost,cost[i]);
        }
        res+=sum_cost-max_cost;
        return res;
    }
};