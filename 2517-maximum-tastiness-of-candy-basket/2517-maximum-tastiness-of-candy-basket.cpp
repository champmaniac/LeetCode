class Solution {
public:
    bool isPossible(vector<int>&price,int minDist,int k){
        int take=1;
        int lastCandyPos = price[0];
        for(int i=1;i<price.size();i++){
            if(price[i]-lastCandyPos>=minDist){
                take++;
                lastCandyPos=price[i];
                if(take>=k) return true;
            }
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        int n = price.size();
        sort(price.begin(),price.end());
        int ans=0;
        int low = 1, high = price[n-1]-price[0];
        while(low<=high){
            int mid = (low+high)>>1;
            if(isPossible(price,mid,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};