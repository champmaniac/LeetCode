// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
        string sum;
        sort(arr,arr+n);
        int mini =0;
        for(int i=n-1;i>=0;i--){
            int temp = arr[i]+arr[i-1]+mini;
            mini=temp/10;
            sum = char(temp%10+'0')+sum;
            i--;
        }
        if(mini!=0){
            sum = char(mini+'0')+sum;
        }
        while(sum[0]=='0'){
            sum.erase(sum.begin()+0);
        }
        return sum;
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
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends