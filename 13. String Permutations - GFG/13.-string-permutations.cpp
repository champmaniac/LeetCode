// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void func(int ind, string s,vector<string> &ans){
        if(ind==s.size()) {
            ans.push_back(s);
            return;
        }
        for(int i=ind;i<s.size();i++){
            swap(s[i],s[ind]);
            func(ind+1,s,ans);
            swap(s[i],s[ind]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        func(0,S,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends