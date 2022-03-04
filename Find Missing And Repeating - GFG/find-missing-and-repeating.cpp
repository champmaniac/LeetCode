// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int x;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                x=arr[i];
                break;
            }
        }
        
        int y;
        for(int i=1;i<=n;i++){
            if(binary_search(arr,arr+n,i)){
                continue;
            }
            else
            {
                y=i;
            }
        }
        
        int *res = new int[2];
        res[0]=x;
        res[1]=y;
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends