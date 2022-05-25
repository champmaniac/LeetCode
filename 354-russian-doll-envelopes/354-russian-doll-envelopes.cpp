class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& env) {
        int n = env.size();
        sort(env.begin(),env.end(),comp);
        vector<int> lis;
        for(int i=0;i<n;i++){
            int ele = env[i][1];
            int index = lower_bound(lis.begin(),lis.end(),ele)-lis.begin();
            if(index>=lis.size()) lis.push_back(ele);
            else lis[index]=ele;
        }
        return lis.size();
    }
};