// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
public:
    int minOperations(int *a,int n)
    {
        int cnt=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            if(!pq.empty() && pq.top()<a[i]){
                cnt+=a[i]-pq.top(),pq.push(a[i]);
                pq.pop();
            }
            pq.push(a[i]);
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends