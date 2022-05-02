// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int isPossible(int A[], int barrier , int B, int N){
        int count=0, sumAllocated=0;
        for(int i=0;i<N;i++){
            if(sumAllocated+A[i]>barrier){
                count+=1;
                sumAllocated=A[i];
                if(sumAllocated>barrier) return false;
            }
            else
                sumAllocated+=A[i];
        }
        if(count<B) return true;
        return false;
    }
    int findPages(int A[], int N, int B) 
    {
        //code here
        if(B>N) return -1;
        int low =A[0],high = 0;
        for(int i=0;i<N;i++){
            high = high+A[i];
            low = min(low,A[i]);
        }
        while(low<=high){
            int mid = (low+high) >>1;
            if(isPossible(A,mid,B,N)){
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return low;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends