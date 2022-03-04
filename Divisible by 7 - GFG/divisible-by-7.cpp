// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        int arr[]={1,3,2,-1,-3,-2};
        int sum=0;
        int i = 0;
        int j = num.size()-1;
        while(j>=0){
            sum+=(num[j--]-'0')*(arr[(i++)%6]);
        }
        return sum%7==0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}  // } Driver Code Ends