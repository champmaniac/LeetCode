// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string s;
        for(int i=0;i<arr[0].size();i++){
            int flag = 1;
            for(int j=0;j<N;j++){
                if(arr[j][i]==arr[0][i]) continue;
                else flag = 0;
            }
            if(flag==1) s.push_back(arr[0][i]);
            else break;
        }
        if(s.size()>=1) return s;
        else return "-1";
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends