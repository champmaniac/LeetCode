class Solution {
public:
    unordered_map<int,int> mp;
    int islands=0;
    int find(int x){
        if(!mp.count(x)) mp[x]=x,islands++;
        if(x!=mp[x]) mp[x] = find(mp[x]);
        return mp[x];
    }
    void uni(int x, int y){
        x=find(x), y=find(y);
        if(y!=x){
            mp[x] = y;
            --islands;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        for(int i=0;i<stones.size();i++){
            uni(stones[i][0], ~stones[i][1]);
        }
        return stones.size()-islands;
    }
};