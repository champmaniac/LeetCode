// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int maxValueK(vector<int>& arr) {
        //Code Here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            if(arr[i]<=(n-i)){
                if(arr[i]==(n-i)) return arr[i];
                else return n-i-1;
            }
        }
        return n;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxValueK(A) << endl;
    }
    return 0;
}  // } Driver Code Ends