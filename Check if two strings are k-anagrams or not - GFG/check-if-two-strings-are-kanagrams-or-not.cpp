// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        int n = str1.size();
        if(str2.size()!=n) return false;
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[str1[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(freq[str2[i]-'a']>0)
                freq[str2[i]-'a']--;
            else
                count++;
            if(count>k)
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends