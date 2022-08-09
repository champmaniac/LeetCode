class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> copyIntervals;
        int n = intervals.size();
        for(int i=0;i<n;i++){
            copyIntervals.push_back(intervals[i]);
        }
        copyIntervals.push_back(newInterval);
        sort(copyIntervals.begin(),copyIntervals.end());
        vector<vector<int>> merged;
        int size = copyIntervals.size();
        for(int i=0;i<size;i++){
            if(merged.empty() || merged.back()[1]<copyIntervals[i][0]){
                vector<int> v = {copyIntervals[i][0],copyIntervals[i][1]};
                merged.push_back(v);
            }
            else{
                merged.back()[1] = max(merged.back()[1],copyIntervals[i][1]);
            }
        }
        return merged;
    }
};