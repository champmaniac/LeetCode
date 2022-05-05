// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string sub(string s, int a, int b){
        string t = "";
        for(int i=a;i<=b;i++){
            t+=s[i];
        }
        return t;
    } 
    string stringPartition(string s, int a, int b){
        // code here 
        for(int i=0;i<s.length()-1;i++)
         {
             string s1=sub(s,0,i);
             string s2=sub(s,i+1,s.length()-1);
             if(stoi(s1)%a==0 && stoi(s2)%b==0)
                return s1+" "+s2;
         }
         return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends