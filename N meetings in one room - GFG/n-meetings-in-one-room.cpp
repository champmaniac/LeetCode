// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution

{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        if(n==0) return 0;
        vector<vector<int>> res;
        for(int i{};i<n;i++){
            vector<int>v;
            v.push_back(end[i]);
            v.push_back(start[i]);
            res.push_back(v);
        }
        sort(res.begin(),res.end());
        int limit = res[0][0];
        int cnt{1};
        for(int i{1};i<res.size();i++){
            if(res[i][1]>limit) limit = res[i][0],cnt++;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends