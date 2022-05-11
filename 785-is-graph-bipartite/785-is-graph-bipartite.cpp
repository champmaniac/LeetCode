class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            if(color[i]) continue; 
            q.push(i);
            color[i]=1;
            while(!q.empty()){
                int parent = q.front();
                q.pop();
                for(int child:graph[parent]){
                    if(color[child]==0){
                        color[child] = -color[parent];
                        q.push(child);
                    }
                    else
                        if(color[child]==color[parent]) return false;
                }
            }
        }
        return true;
    }
};