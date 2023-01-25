class Solution {
public:
    void bfs(vector<int>& edges, int start, vector<int>& dist) {
        queue<int> q;
        q.push(start);
        dist[start] = 0;
        unordered_set<int> seen;
        seen.insert(start);
        while (!q.empty()) {
            int cur = q.front(); q.pop();
            if (edges[cur] != -1 && !seen.count(edges[cur])) {
                q.push(edges[cur]);
                seen.insert(edges[cur]);
                dist[edges[cur]] = dist[cur] + 1;
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> dist1(n, INT_MAX), dist2(n, INT_MAX);
        bfs(edges, node1, dist1);
        bfs(edges, node2, dist2);

        int final_node = -1, min_distance = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (dist1[i] != INT_MAX && dist2[i] != INT_MAX) {
                if(max(dist1[i], dist2[i]) < min_distance) {
                    min_distance = max(dist1[i], dist2[i]);
                    final_node = i;
                }
            }
        }
        return final_node;
    }
};