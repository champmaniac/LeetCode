class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> ahead(2,vector<int> (k+1,0));
        vector<vector<int>> cur(2,vector<int> (k+1,0));
        for(int ind = n-1; ind>=0; ind--){
            for(int buy = 0; buy<=1; buy++){
                for(int cap=1; cap<=k; cap++){
                    if(buy==0){// We can buy the stock
                        cur[buy][cap] = max(0+ahead[0][cap],-prices[ind] + ahead[1][cap]);
                    }
                    if(buy==1){// We can sell the stock
                        cur[buy][cap] = max(0+ahead[1][cap],prices[ind] + ahead[0][cap-1]);
                    }
                }
            }
            ahead = cur;
        }
        return ahead[0][k];
    }
};

    
