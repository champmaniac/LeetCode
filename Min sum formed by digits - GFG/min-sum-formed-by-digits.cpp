// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        if(n==1) return arr[0];
       string numA="",numB="";
       sort(arr,arr+n);
       for(int i=0;i<n;i++){
           if(i%2==0) numA += to_string(arr[i]);
           else numB += to_string(arr[i]);
       }
       
       long long int a=0,b=0; 
       for(int i = 0; i < numA.length(); i++)
           a = a * 10 + numA[i] - '0';
       for(int i = 0; i < numB.length(); i++)
           b = b * 10 + numB[i] - '0';
           
       return a + b;
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends