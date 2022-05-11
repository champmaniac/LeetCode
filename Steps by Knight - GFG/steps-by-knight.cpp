// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&k,vector<int>&t,int n)
	{
	    // Code here
	    int m[8][2]={{-2,-1},{-2,1},{-1,2},{-1,-2},{1,2},{1,-2},{2,-1},{2,1}};
	    queue<pair<int,int>> q;
	    q.push({k[0],k[1]});
	    vector<vector<int>> vis(n+1,vector<int>(n+1,0));
	    vis[k[0]][k[1]] =1;
	    int ans=0;
	    while(!q.empty()){
	        int size = q.size();
	        while(size-- >0){
	            pair<int,int> p = q.front();
	            q.pop();
	            int x = p.first;
	            int y = p.second;
	            if(x==t[0] && y==t[1]) 
	                return ans;
	            for(int i=0;i<8;i++){
	                int cx = x+m[i][0];
	                int cy = y+m[i][1];
	                if(cx>0 && cy>0 && cx<=n && cy<=n && !vis[cx][cy]){
	                    q.push({cx,cy});
	                    vis[cx][cy]=1;
	                }
	            }
	        }
	        ans++;
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends