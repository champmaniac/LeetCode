// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long n)
   {
       return mergeSort(arr,0,n-1);
   }
long long int mergeSort(long long arr[],long long low,long long high){
    long long res=0;
    if(low<high){
      long long mid=(low+high)/2;
        res+=mergeSort(arr,low,mid);
        res+=mergeSort(arr,mid+1,high);
        res+=merge(arr,low,mid,high);
    }
    return res;
}
long long merge(long long arr[],long long low,long long mid,long long high){
    int n1=mid-low+1;
    int n2=high-mid;
    long long left[n1];
    long long right[n2];
    for(int  i=0;i<n1;i++){
        left[i]=arr[i+low];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }
   long long i=0,j=0,k=low,res=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            res+=n1-i;
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
    return res;
}

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends