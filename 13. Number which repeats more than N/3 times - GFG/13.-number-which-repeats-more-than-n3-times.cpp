// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> solve(int nums[], int n){
        int sz = n;
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
      for (i = 0; i < sz; i++) {
        if (nums[i] == num1)
          count1++;
        else if (nums[i] == num2)
          count2++;
        else if (count1 == 0) {
          num1 = nums[i];
          count1 = 1;
        } else if (count2 == 0) {
          num2 = nums[i];
          count2 = 1;
        } else {
          count1--;
          count2--;
        }
      }
      vector < int > ans;
      count1 = count2 = 0;
      for (i = 0; i < sz; i++) {
        if (nums[i] == num1)
          count1++;
        else if (nums[i] == num2)
          count2++;
      }
      if (count1 > sz / 3)
        ans.push_back(num1);
      if (count2 > sz / 3)
        ans.push_back(num2);
      return ans;
    }
    int repeatNum(int arr[] ,int n) {
        // code here
        vector<int> majority;
        majority = solve(arr,n);
        set<int> st(majority.begin(), majority.end());
        if(st.empty()) return -1;
        for(auto it:st){
            return it;
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        int arr[n];
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.repeatNum(arr,n);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends