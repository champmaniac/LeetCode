// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(int pos)
   {
       if(pos==1)
           return true;
       else if(pos==2)
           return false;
       else
       {
           if(pos&1)
           {
               return solve((pos+1)/2);
           }
           else    
           {
               return !(solve(pos/2));
           }
       }
   }

   char profession(int level, int pos){
       // code here
       int l=1;
       while((1<<l)<pos)
           l++;
       l++;
       if(solve(pos)==true)
           return 'e';
       else
           return 'd';
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}  // } Driver Code Ends