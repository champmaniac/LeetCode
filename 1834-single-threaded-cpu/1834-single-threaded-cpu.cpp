class Solution {
    typedef pair<int,int>T;
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<T,vector<T>,greater<>>pq;
        long N = tasks.size(),i=0,time=0;
        for(int i=0;i<N;i++){
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        vector<int>ans;
        while(i<N || pq.size()){
            if(pq.empty()){
                time = max(time,long(tasks[i][0]));
            }
            while(i<N && time>=tasks[i][0]){
                pq.emplace(tasks[i][1],tasks[i][2]);
                ++i;
            }
            auto[pro,index]=pq.top();
            pq.pop();
            
            time+=pro;
            ans.push_back(index);
        }
        return ans;
    }
};