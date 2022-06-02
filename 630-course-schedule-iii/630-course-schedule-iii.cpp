class Solution {
public:
    bool static comp(vector<int> &course1, vector<int> &course2){
        return (course1[1]!=course2[1])? (course1[1]<course2[1]):(course1[0]<course2[0]);
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        int n = courses.size();
        sort(courses.begin(),courses.end(),comp);
        priority_queue<int> pq;
        int maxT=0;
        for(auto course:courses){
            if(course[0]<=course[1]){
                if(maxT+course[0]<=course[1]){
                    pq.push(course[0]);
                    maxT+=course[0];
                }
                else if(pq.top()>course[0]){
                    maxT-=pq.top();
                    pq.pop();
                    maxT+=course[0];
                    pq.push(course[0]);
                }
            }
        }
        return pq.size();
    }
};