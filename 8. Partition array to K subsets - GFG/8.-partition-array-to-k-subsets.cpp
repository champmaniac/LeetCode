// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    int subsetSum[11];
   
   bool helper(int a[],int n,int ind,int k){
       if(ind == n){
           for(int i = 1; i < k; i++){
               if(subsetSum[i] != subsetSum[i-1]) return (false);
           }
           return (true);
       }
       
       for(int i = 0; i < k; i++){
           if(subsetSum[i]){
               subsetSum[i] += a[ind];
               if(helper(a,n,ind+1,k)){
                   return (true);
               }
               subsetSum[i] -= a[ind];}
           else{
               subsetSum[i] += a[ind];
               if(helper(a,n,ind+1,k)){
                   return (true);
               }
               subsetSum[i] -= a[ind];
               break;
           }
       }
       
       return (false);
   }
   
   bool isKPartitionPossible(int a[], int n, int k){
       if(k <= 0 || k > n) return (false);
       if(k == 1) return (true);
       
       int sum = 0;
       for(int i = 0; i < n; i++)
           sum += a[i];
       
       if(sum % k) return (false);
       
       for(int i = 0; i < k; i++){
           subsetSum[i] = 0;
       }
       return helper(a,n,0,k);
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