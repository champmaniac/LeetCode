// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int temp[n];
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp[j++]=arr[i];
            }
        }
        
        if(j==0 ||j==n) return;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp[j++]=arr[i];
            }
        }
        memcpy(arr,temp,sizeof temp);
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends