class Solution {
public:
        unordered_map<int, vector<int>> richer2;
    vector<int> res;
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        for (auto v : richer) richer2[v[1]].push_back(v[0]);
        res = vector<int> (quiet.size(), -1);
        for (int i = 0; i < quiet.size(); i++) dfs(i, quiet);
        return res;
    }

    int dfs(int i, vector<int>& quiet) {
        if (res[i] >= 0) return res[i];
        res[i] = i;
        for (int j : richer2[i]) if (quiet[res[i]] > quiet[dfs(j, quiet)]) res[i] = res[j];
        return res[i];
    }
};