// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:
    int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int maxPoints(int X[], int Y[],int N) {
     string slope;

     int maxcount=0;
     for(int i=0;i<N-1;i++){
         unordered_map<string,int> m;
         int verticalp=0,overlapping=0,horizontalp=0;
         int cur=0;
         for(int j=i+1;j<N;j++){
             int xdiff = X[j]-X[i];
             int ydiff = Y[j]-Y[i];
             int gcdint=gcd(ydiff,xdiff);
             
             if(ydiff==0 && xdiff==0){
                 overlapping++;
             }
             else if(ydiff==0 && xdiff!=0){
                 horizontalp++;
             }
              else if(ydiff!=0 && xdiff==0){
                 verticalp++;
             }
             else{
                 xdiff=xdiff/gcdint;
                 ydiff=ydiff/gcdint;
                 string slope=to_string(xdiff)+'a'+to_string(ydiff);
                 m[slope]++;
                 cur=max(cur,m[slope]);
             }
         }
            int temp =max(max(cur,verticalp),horizontalp)+overlapping;
            maxcount=max(maxcount,temp);
     }
     return (maxcount+1);
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x[n], y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        Solution ob;
        cout << ob.maxPoints(x, y, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends