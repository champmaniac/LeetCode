#define ll long long
class Solution {
public:
    int memo[1001][2049];
    vector<int>vec={2,3,5,7,11,13,17,19,23,29};
    ll mod=1e9+7;
    ll dp(vector<int>&nums,int i,int mask)
    {
        if(i==nums.size())
            return 1;
        
        if(memo[i][mask]!=-1)
            return memo[i][mask];
        int temp=mask,flag=1;
        
        for(int j=0;j<10;j++)
        {
            int num=nums[i],count=0;
            while(num%vec[j]==0)
            {
                num/=vec[j];
                count++;
            }
            
            if(count>=2 || ((count==1)&&((mask>>j)&1)))
            {
                flag=0;
                break;
            }
            if(count)
                temp=temp|(1<<j);
        }
        if(flag)
               return memo[i][mask]=(dp(nums,i+1,mask)+dp(nums,i+1,temp))%mod;
        else
              return memo[i][mask]=dp(nums,i+1,mask);
        
    }
    
    int squareFreeSubsets(vector<int>& nums) 
    {
        memset(memo,-1,sizeof(memo));
        return dp(nums,0,0)-1;  
    }
};