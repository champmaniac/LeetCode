class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int l = INT_MIN, r =0;
        for(int i=0;i<n;i++){
            l=max(l,weights[i]);
            r+=weights[i];
        }
        int parts=1,ans=INT_MAX;
        while(l<=r){
            int mid = l+(r-l)/2;
            int i=0,sum=0;
            parts=1;
            while(i<n && sum<=mid){
                sum+=weights[i++];
                if(sum>mid){
                    i--;
                    parts++;
                    sum=0;
                }
            }
            if(parts<=days){
                ans=min(ans,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};