// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
       int s=0;
       int e=N-1;
       int minCost=0;
       while(s<=e)
       {
           minCost+=candies[s++];
           e-=K;
       }
       int maxCost=0;
       s=0;
       e=N-1;
       while(s<=e)
       {
           maxCost+=candies[e--];
           s+=K;
       }
       vector<int>ans;
       ans.push_back(minCost);
       ans.push_back(maxCost);
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends