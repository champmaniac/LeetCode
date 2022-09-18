class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int l=0,r=n-1,res=0;
        int lmax=0,rmax=0;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(arr[l]>lmax) lmax=arr[l];
                else{
                    res+=lmax-arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>rmax){
                    rmax=arr[r];
                }
                else{
                    res+=rmax-arr[r];
                }
                r--;
            }
        }
        return res;
    }
};