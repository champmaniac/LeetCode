// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
    static bool sortr(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        sort(begin(ranges),end(ranges),sortr);
        int count=0,next=0,end=-1;
        for(auto &it:ranges){
            if(end<=it[0]){
                count++;
                end=it[1];
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends