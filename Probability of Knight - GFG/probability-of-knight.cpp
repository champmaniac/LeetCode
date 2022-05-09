// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	bool isGood(int i,int j,int N)
{
    if(i>=0 and j>=0 and i<N and j<N) return true;
    else return false;
}
double findProb(int N,int start_x, int start_y, int steps)
{
    // Code here
    vector<vector<double>> ans(N,vector<double>(N,0.0));
    vector<vector<double>> sol(N,vector<double>(N,0.0));
    ans[start_x][start_y]=1;
    for(int i=1;i<=steps;i++)
    {
        for(int k=0;k<N;k++)
        {
            for(int l=0;l<N;l++)
            {
                if(ans[k][l]!=0)
                {
                    if(isGood(k-2,l+1,N))
                    {
                        sol[k-2][l+1]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k-1,l+2,N))
                    {
                        sol[k-1][l+2]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k+2,l+1,N))
                    {
                        sol[k+2][l+1]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k+1,l+2,N))
                    {
                        sol[k+1][l+2]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k-2,l-1,N))
                    {
                        sol[k-2][l-1]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k-1,l-2,N))
                    {
                        sol[k-1][l-2]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k+2,l-1,N))
                    {
                        sol[k+2][l-1]+=(ans[k][l])/8.0;
                    }
                    if(isGood(k+1,l-2,N))
                    {
                        sol[k+1][l-2]+=(ans[k][l])/8.0;
                    }
                }
            }
        }
        ans=sol;
        vector<vector<double>> sol1(N,vector<double>(N,0.0));
        sol=sol1;
    }
    double arh=0;
    for(int q=0;q<N;q++)
    {
        for(int p=0;p<N;p++)
        {
            arh+=ans[q][p];
        }
    }
    return arh;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N, start_x, start_y, steps;
		cin >> N >> start_x >> start_y >> steps;
		Solution ob;
		double ans = ob.findProb(N, start_x, start_y, steps);
		cout << fixed << setprecision(6) << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends