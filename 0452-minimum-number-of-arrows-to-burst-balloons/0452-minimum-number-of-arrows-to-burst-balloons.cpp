bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& segments) {
        sort(segments.begin(),segments.end(),cmp);
        int n = segments.size();
        int ans=0,arrow=0;
        for(int i=0;i<n;i++){
            if(ans==0 || segments[i][0]>arrow){
                ans++;
                arrow=segments[i][1];
            }
        }
        return ans;
    }
};