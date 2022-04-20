// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	    vector<pair<double,int>> a;
	    for(int i=0;i<N;i++)
	    {
	        int sqroot=sqrt(w[i]);
	        if(sqroot*sqroot!=w[i])
	        a.push_back({(p[i]*1.0d)/w[i],i});
	    }
	    sort(a.begin(),a.end(),greater<pair<double,int>>());
	    double ans=0.0;
	    for(int i=0;i<a.size();i++)
	    {
	        int weight=min(w[a[i].second],C);
	        ans=ans+weight*a[i].first;
	        C-=weight;
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends