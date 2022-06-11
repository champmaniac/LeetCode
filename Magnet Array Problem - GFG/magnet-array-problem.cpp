// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    double binary_Search(double low,double high,double a[],int n){
        while(low<high){
            double mid = low + (high-low)/2, netForce = 0.0,minForce=(1e-6);
            for(int i=0;i<n;i++)
                netForce+= 1/(mid-a[i]);
            if(netForce>minForce)
                low=mid;
            else if(netForce<-minForce)
                high=mid;
            else
                return mid;
        }
    }
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here 
        for(int i=0;i<n-1;i++){
            getAnswer[i] = binary_Search(magnets[i],magnets[i+1],magnets,n);
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends