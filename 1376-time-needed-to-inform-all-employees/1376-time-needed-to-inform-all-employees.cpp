class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[manager[i]].push_back(i);
        }
        queue<pair<int,int>> q;
        q.push({headID,0});
        int maxi=0;
        while(!q.empty()){
            int sz = q.size();
            while(sz -->0){
                int head = q.front().first;
                int TimeTaken = q.front().second;
                q.pop();
                int dur = informTime[head]+TimeTaken;
                maxi = max(maxi,dur);
                for(auto &it:mp[head]){
                    q.push({it,dur});
                }
            }
        }
        return maxi;
    }
};