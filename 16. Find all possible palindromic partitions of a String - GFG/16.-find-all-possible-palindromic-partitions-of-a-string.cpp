// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
private:
    bool isPalindrome(string &S,int start, int end){
        while(start<end){
            if(S[start]!=S[end]){
                return false;
            }
            end--;
            start++;
        }
        return true;
    }
    void solve(string &S, vector<vector<string>> &ans, vector<string> currPath,int ind, int n){
        if(ind>=n){
            ans.push_back(currPath);
            return;
        }
        for(int i=ind;i<n;i++){
            if(isPalindrome(S,ind,i)){
                currPath.push_back(S.substr(ind,i-ind+1));
                solve(S,ans,currPath,i+1,n);
                currPath.pop_back();
            }
        }
    }
public:
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<vector<string>> ans;
        int n = S.size();
        vector<string> currPath;
        solve(S,ans,currPath,0,n);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends