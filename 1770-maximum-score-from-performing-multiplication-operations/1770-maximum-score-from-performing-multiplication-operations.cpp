class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        int m=multi.size(), n=nums.size();
        
        vector <vector<int>> dp (m+1, vector<int> (m+1));   //dp 2D array
        
        for(int i=m-1; i>=0; i--){                          //for the state variable m
            for(int left=i; left>=0; left--){               //for the state variable left
                int mult = multi[i], right = n-1-(i-left);  //state variable right is calculated within loop
                dp[i][left] = max(mult*nums[left]+dp[i+1][left+1], mult*nums[right]+dp[i+1][left]); //recurrence relation
            }
        }
        
        return dp[0][0];        //retyrning our result
    }
};