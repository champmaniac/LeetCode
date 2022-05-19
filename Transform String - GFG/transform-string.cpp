// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        int cnt=0,i=A.size()-1,j=B.size()-1;
        if(i!=j) return -1;
        map<char,int> mp1,mp2;
        for(int p=0;p<=i;p++){
            mp1[A[p]]++;
            mp2[B[p]]++;
        }
        
        if(mp1!=mp2) return -1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]) i--,j--;
            else{
                while(A[i]!=B[j] && i>=0 && j>=0) i--, cnt++;
            }
        }
        return cnt;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends