// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool checkPositive(int arr[], int n){
        for(int i=0;i<n;i++){
            if(arr[i]>0) return (true);
        }
        return (false);
    }
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    if(!checkPositive(a,n)){
	        return (vector<int>{-1});
	    }
	    int i=0,j=0;
	    long long int max_sum=0;
	    long long int cur_sum=0;
	    
	    int start=0,end=0;
	    while(j<n){
	        if(a[j]>=0){
	            cur_sum+=a[j];
	            if(cur_sum>=max_sum){
	                start =i;
	                end=j;
	                max_sum=cur_sum;
	            }
	            j++;
	        }
	        else{
	            cur_sum=0;
	            i=j+1;
	            j++;
	        }
	    }
	    
	    vector<int> ans;
	    for(int i=start;i<=end;i++)
	    {
	        ans.push_back(a[i]);
	    }
	    if(!ans.size()) ans.push_back(-1);
	    return (ans);
	}
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends