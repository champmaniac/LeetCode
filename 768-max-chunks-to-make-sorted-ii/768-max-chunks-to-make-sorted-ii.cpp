class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int64_t sum1=0,sum2=0,ans=0;
        vector<int> temp =arr;
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++){
            sum1+=temp[i];
            sum2+=arr[i];
            if(sum1==sum2) ans++;
        }
        return ans;
    }
};