class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
        });
        int totUnits=0;
        for(auto &box: boxTypes){
            int numBoxes = min(truckSize,box[0]);
            totUnits += numBoxes*box[1];
            truckSize-=numBoxes;
        }
        return totUnits;
    }
};