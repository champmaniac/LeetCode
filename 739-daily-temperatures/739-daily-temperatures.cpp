class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        int maxi = temp[n-1];
        vector<int> res(n,0);
        for(int i=n-2;i>=0;i--){
            if(temp[i]>=maxi){
                maxi = temp[i];
                continue;
            }
            int j = i+1;
            while(temp[i]>=temp[j]){
                j = res[j]==0?0:j+res[j];
            }
            res[i]=j-i;
        }
        return res;
    }
};