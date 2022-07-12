class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pq) {
        vector<vector<int>> graph(numCourses);
        vector<int> degree(numCourses,0);
        queue<int> zeroDegree;
        for(int i=0;i<pq.size();i++){
            graph[pq[i][1]].push_back(pq[i][0]);
            degree[pq[i][0]]++;
        }
        for(int i=0;i<degree.size();i++){
            if(degree[i]==0){
                zeroDegree.push(i);
                numCourses--;
            }
        }
        while(!zeroDegree.empty()){
            int node = zeroDegree.front();
            zeroDegree.pop();
            for(int i=0;i<graph[node].size();i++){
                int connectedNode = graph[node][i];
                degree[connectedNode]--;
                if(degree[connectedNode]==0){
                    zeroDegree.push(connectedNode);
                    numCourses--;
                }
            }
        }
        return numCourses==0;
    }
};