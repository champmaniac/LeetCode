// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

    vector<string> permutation(string S){
        // Code Here
        int len = S.size()-1;
        vector<string> ans;
        dfs(S,len,ans);
        return ans;
    }
    void dfs(string s , int len , vector<string> &ans){
        if(len == 0){
            ans.push_back(s);
            return ;
        }
        dfs(s.substr(0,s.size() - len) + " " + s.substr(s.size()-len),len - 1  ,ans);
        dfs(s , len - 1 , ans ) ;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends