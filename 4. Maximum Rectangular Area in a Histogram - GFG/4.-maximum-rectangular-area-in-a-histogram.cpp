// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long maxArea =0;
        vector<int> next_index(n,n), prev_index(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                next_index[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<arr[st.top()]){
                prev_index[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]*(next_index[i]-prev_index[i]-1)>maxArea)
                maxArea = arr[i]*(next_index[i]-prev_index[i]-1);
        }
        return maxArea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends