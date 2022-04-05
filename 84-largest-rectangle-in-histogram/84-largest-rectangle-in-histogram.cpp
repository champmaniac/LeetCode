class Solution {
public:
    int largestRectangleArea(vector<int>heights){
        int n = heights.size();
        stack<int> st;
        int leftSmall[n], rightSmall[n];
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) leftSmall[i]=0;
            else leftSmall[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop(); // clearing the stack to be reused
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) rightSmall[i]=n-1;
            else rightSmall[i]=st.top()-1;
            st.push(i);
        }
        int maxi =0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,heights[i]*(rightSmall[i]-leftSmall[i]+1));
        }
        return maxi;
    }
    
    
    // int largestRectangleArea(vector<int>& heights) { // TC O(N^2)
    //     int n = heights.size();
    //     int max_area =0;
    //     for(int i=0;i<n;i++){
    //         int cur_max=0;
    //         int min_height=INT_MAX;
    //         for(int j=i;j<n;j++){
    //             min_height=min(min_height,heights[j]);
    //             cur_max = max(cur_max, min_height*(j-i+1));
    //         }
    //         max_area = max(max_area,cur_max);
    //     }
    //     return max_area;
    // }
};