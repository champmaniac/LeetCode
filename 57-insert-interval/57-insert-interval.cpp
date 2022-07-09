class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int size = intervals.size();
        int i=0;
        // no overlapping between the ending point of interval to the starting point of the newInterval
        while(i<size && intervals[i][1]<newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        // overlapping case and merge intervals
        while(i<size && newInterval[1]>=intervals[i][0]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        // no overlapping after newInterval being merged
        while(i<size){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};