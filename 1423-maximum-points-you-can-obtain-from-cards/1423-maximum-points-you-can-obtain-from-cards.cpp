class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n = cp.size();
        int sum=0;
        vector<int> cumFromStart(n+1,0);
        vector<int> cumFromEnd(n+1,0);
        for(int i=0;i<n;i++){
            sum+=cp[i];
            cumFromStart[i+1]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=cp[i];
            cumFromEnd[i]=sum;
        }
        reverse(begin(cumFromEnd),end(cumFromEnd));
        int ans=0;
        for(int i=0;i<=k;i++){
            ans = max(ans,cumFromStart[i]+cumFromEnd[k-i]);
        }
        return ans;
    }
};