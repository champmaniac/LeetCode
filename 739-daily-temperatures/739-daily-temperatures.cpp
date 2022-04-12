class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        int maxi = INT_MIN;
        vector<int> res(n,0);
        for(int i=n-1;i>=0;i--){
            if(temp[i]>=maxi){
                maxi = temp[i];
                continue;
            }
            int d=1;
            while(temp[i]>=temp[i+d]){
                d+=res[i+d];
            }
            res[i]=d;
        }
        return res;
    }
};