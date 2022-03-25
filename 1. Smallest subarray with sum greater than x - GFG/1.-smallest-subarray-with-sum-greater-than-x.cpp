// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int mini = INT_MAX;
        int sum=0,i=0,j=0,count=0;
        while(i<n && j<n){
            sum+=arr[j];
            count++;
            if(sum>x){
                mini = min(mini,count);
                sum=0;
                count=0;
                i++;
                j=i;
            }
            else
                j++;
        }
        return mini;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends