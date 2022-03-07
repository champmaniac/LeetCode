// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.size();
		    vector<string> ans;
		    for(int num=0;num<(1<<n);num++){
		        string sub="";
		        for(int i=0;i<n;i++){
		            if(num&(1<<i)){
		                sub+=s[i];
		            }
		        }
		        if(sub.size()>0){
		            ans.push_back(sub);
		        }
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends