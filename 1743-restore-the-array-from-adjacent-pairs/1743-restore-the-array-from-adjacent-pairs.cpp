class Solution {
public:
    void dfs(map<int,vector<int>> &mp, set<int> &s, int a,vector<int> &ans){
        if(s.find(a)!=s.end()) return;
        ans.push_back(a);
        s.insert(a);
        for(auto x:mp[a]) dfs(mp,s,x,ans);
    }
    vector<int> restoreArray(vector<vector<int>>& A) {
        map<int,vector<int>> mp;
        for(auto a:A){
            mp[a[0]].push_back(a[1]);
            mp[a[1]].push_back(a[0]);
        }
        int head;
        for(auto a:mp){
            if(a.second.size()==1) head=a.first;
        }
        set<int> s;
        vector<int> ans;
        dfs(mp,s,head,ans);
        return ans;
    }
};