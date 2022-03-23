// { Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    vector<int> sol;
    void merge(vector<pair<int,int>> &a,int start,int mid,int end){
        int i=start,j=mid+1;
        while(i<=mid && j<=end){
            if(a[i].first<=a[j].first){
                sol[a[i].second] += (j-mid-1);
                i++;
            }
            else
                j++;
        }
        while(i<=mid){
            sol[a[i].second] += (j-mid-1);
            i++;
        }
        sort(a.begin()+start,a.begin()+end+1);
    }
    
    void mergesort(vector<pair<int,int>> &a,int start,int end){
        if(start>=end) return;
        int mid = start+(end-start)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
	vector<int> constructLowerArray(int *nums, int n) {
	    // code here
        sol.resize(n,0);
        vector<pair<int,int>> idx;

        for(int i=0;i<n;i++)
            idx.push_back({nums[i],i});
        
        mergesort(idx,0,n-1);
        return sol;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends