// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    long solve(long x,long k)
    {
        if(x>k) return 0;
        if(x==2) return k-1;
        long cnt=0;
        for(int i=1;i<=(k-x+1);i++)
        {
            cnt+=solve(x-1,k-i);
        }
        return cnt;
    }
    long posIntSol(string s)
    {
        long n=s.size();
        int i=n-1;
        while(s[i]!='=') i--;
        int k=0;
        for(int j=i+1;j<n;j++)
        {
            int a=s[j]-'0';
            k=k*10+a;
        }
        n-=2;
        long x=1+((n-1)/2);
        if(k<x) return 0;
        if(x==k) return 1;
        return solve(x,k);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends