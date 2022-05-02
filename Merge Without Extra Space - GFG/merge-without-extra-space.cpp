// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long ar1[], long long ar2[], int n, int m) 
        { 
            // code here
            int gap = ceil((float)(n + m) / 2);
            while (gap > 0) {
                int i = 0;
                int j = gap;
                while (j < (n + m)) {
                  if (j < n && ar1[i] > ar1[j]) {
                    swap(ar1[i], ar1[j]);
                  } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
                    swap(ar1[i], ar2[j - n]);
                  } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
                    swap(ar2[i - n], ar2[j - n]);
                  }
                  j++;
                  i++;
                }
                if (gap == 1) {
                  gap = 0;
                } else {
                  gap = ceil((float) gap / 2);
                }
              }
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends