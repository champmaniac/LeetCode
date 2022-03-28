// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        stack<int> st;
        st.push(-1);
        int maxLen =0;
        int n = S.size();
        for(int i=0;i<n;i++){
            int top = st.top();
            if(top!=-1 && S[i]==')' && S[top]=='('){
                st.pop();
                maxLen = max(maxLen,i-st.top());
            }
            else
                st.push(i);
        }
        return maxLen;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends