// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isvalid(int i,int j,int n){
        if(i>0 && j>0 && i<=n && j<=n) return true;
        return false;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int dir[8][2]={{-2,-1},{-2,1},{-1,2},{-1,-2},{1,2},{1,-2},{2,-1},{2,1}};
	    queue<pair<int,int>> q;
	    q.push({KnightPos[0],KnightPos[1]});
	    vector<vector<int>> vis(N+1,vector<int> (N+1,0));
	    vis[KnightPos[0]][KnightPos[1]]=1;
	    int ans=0;
	    while(!q.empty()){
	        int sz = q.size();
	        while(sz--){
	            auto top = q.front();
	            q.pop();
	            int x = top.first;
	            int y = top.second;
	            if(x==TargetPos[0] && y==TargetPos[1]) return ans;
	            for(int i=0;i<8;i++){
	                int di = x+dir[i][0];
	                int dj = y+dir[i][1];
	                if(isvalid(di,dj,N) && !vis[di][dj]){
	                    q.push({di,dj});
	                    vis[di][dj]=1;
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