// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
private:    
    int mins[4] = {600, 60, 10, 1};
public:
    string nextClosestTime(string time) {
        // Code here
        size_t colon = time.find(':');
        int cur = stoi(time.substr(0, colon)) * 60 + stoi(time.substr(colon + 1));
        string next = "0000";
        for (int i = 1, d = 0; i <= 1440 && d < 4; i++)
        {
            int m = (cur + i) % 1440;
            for (d = 0; d < 4; d++)
            {
                next[d] = '0' + m / mins[d];
                m %= mins[d];
                if (time.find(next[d]) == string::npos)
                    break;
            }
        }
        return next.substr(0, 2) + ':' + next.substr(2, 2);
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string time;
	    cin >> time;
        Solution obj;
        string ans = obj.nextClosestTime(time);
        cout << ans << "\n";
    }
	
	return 0;
	
}

  // } Driver Code Ends