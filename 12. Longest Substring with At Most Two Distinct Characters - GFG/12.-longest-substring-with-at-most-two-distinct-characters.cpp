// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
   public:
    int LengthOfLongestSubstringTwoDistinct(string s)
    {
    	//code here.
    	map<char,int> mp;
    	int maxi = INT_MIN;
    	int i=0,j=0;
    	for(j;j<s.size();j++){
    	    mp[s[j]]++;
    	    if(mp.size()<=2) maxi = max(maxi,j-i+1);
    	    else{
    	        mp[s[i]]--;
    	        if(mp[s[i]]==0) mp.erase(s[i]);
    	        i++;
    	    }
    	}
    	return maxi;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    Solution ob;  
	    int ans=ob.LengthOfLongestSubstringTwoDistinct(s);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends