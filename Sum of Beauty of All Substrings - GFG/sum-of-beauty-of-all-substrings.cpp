//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int n = s.size();
        int count=0;
        for(int i=0;i<n;i++){
            int cnt[26]={};
            for(int j=i;j<n;j++){
                cnt[s[j]-'a']++;
                int maxi=0;
                int mini=600;
                
                for(int k=0;k<26;k++){
                    if(cnt[k]>maxi) maxi=cnt[k];
                    if(cnt[k]<mini && cnt[k]!=0) mini =cnt[k]; 
                }
                
                if(mini!=600){
                    count+=(maxi-mini);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends