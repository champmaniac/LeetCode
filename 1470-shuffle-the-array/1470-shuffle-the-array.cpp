class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=2*n-1;i>0;i--)
        {
            int k=i;
            do{
                if(k%2==1)
                    k=k/2+n;
                else
                    k=k/2;
            }
            while(k>i);
            swap(nums[i],nums[k]);
            
        }
        return nums;
    }
};