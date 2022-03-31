class Solution {
private:
    bool doable(const vector<int> &nums, int cuts,long long max){
        int acc=0;
        for(int num:nums){
            if(num>max) return false;
            else if(acc+num<=max) acc+=num;
            else{
                --cuts;
                acc=num;
                if(cuts<0)
                    return false;
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        long long left=0,right=0;
        for(int num:nums){
            left = max(left,(long long)num);
            right+=num;
        }
        
        while(left<right){
            long long mid = left+(right-left)/2;
            if(doable(nums,m-1,mid))
                right=mid;
            else 
                left=mid+1;
        }
        return left;
    }
};