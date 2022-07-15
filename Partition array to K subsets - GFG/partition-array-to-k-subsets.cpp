// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> F;
int S = 0, n;
bool check(int a[], int i, int s) {
    if (i == n) return false;
    if (F[i]) {
        F[i] = 0;
        if (s+a[i]==S || check(a, i+1, s+a[i]))
            return true;
        F[i] = 1;
    }
    return check(a, i+1, s);
}
bool isKPartitionPossible(int a[], int n, int k) {
    for (int i = 0; i < n; i++) S += a[i];
    if (S % k) return false;
    S /= k;  this->n = n;
    sort(a, a+n, [](int a, int b){return a>b;});
    F.assign(n, 1);
    for (int i = 0; i < k; i++)
        if (!check(a, 0, 0))
            return false;
    return true;
}
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends