// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int x[], int y[], int n) {
        // code here
        map<int,int> mp;
       
       //counting pairs having x coordinate as equal.
       int count1=0;
       for(int i=0;i<n;i++)
       {
           if(mp.find(x[i])!=mp.end())
           {
               count1+=mp[x[i]];
           }
           
           mp[x[i]]++;
       }
   
       //counting pairs having y coordinates equal.
       map<int,int> mp1;
       int count2=0;
       for(int i=0;i<n;i++)
       {
           if(mp1.find(y[i])!=mp1.end())
           {
               count2+=mp1[y[i]];
           }
           
           mp1[y[i]]++;
       }
       
       //counting pairs having both coordinates as equal.
       int count3=0;
       map<pair<int,int>,int> mp2;
       for(int i=0;i<n;i++)
       {
           if(mp2.find(make_pair(x[i],y[i]))!=mp2.end())
           {
               count3+=mp2[make_pair(x[i],y[i])];
           }
           mp2[make_pair(x[i],y[i])]++;
       }
       
       return count1+count2-2*count3;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends