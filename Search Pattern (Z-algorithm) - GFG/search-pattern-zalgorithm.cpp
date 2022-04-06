// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            int m = pat.size(), n = txt.size();
            vector<int> ans;
            for(int i=0;i<=n-m;i++){
                int j;
                for(j=0;j<m;j++){
                    if(txt[j+i]!=pat[j]) break;
                }
                if(j==m) ans.push_back(i+1);
            }
            if(ans.size()==0) {
                ans.push_back(-1);
                return ans;
            }
            return ans;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends