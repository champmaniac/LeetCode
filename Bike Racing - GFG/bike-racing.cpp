// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#define ll long long
class Solution{
public:
bool isPossible(ll int N,ll int M,ll int L,long int *H,long int *A,ll int mid)
{
   ll int sum=0;//for calculating the total L speed bike on track
   for(ll int i=0;i<N;i++)
   {
       //using first equation of motion
       ll int v=H[i]+mid*A[i];
       if(v>=L)// if(xis greater than L then only addtion will be perform)
       {
           sum+=v;
       }
   }
   if(sum>=M)
   {
       return true;
   }
   return false;
}
   long buzzTime(long N, long M, long L, long H[], long A[])
   {
       // code here
       ll int e=max(L,M);//picking max value from L and M
       ll int s=0;
       ll ans=-1;
       while(s<=e)
       {
           ll int mid=s+(e-s)/2;
           if(isPossible(N,M,L,H,A,mid))
           {
               ans=mid;
               e=mid-1;
           }
           else
           {
               s=mid+1;
           }
       }
       
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends