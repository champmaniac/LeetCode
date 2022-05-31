// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minThrow(int N, int arr[]){
        // code here
        vector<int> board(31,-1);
        for(int i=0;i<(2*N-1);i+=2){
            board[arr[i]] = arr[i+1];
        }
        
        queue<pair<int,int>> q;
        q.push({1,0});
        
        vector<bool> vis(31,false);
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            int cur_sq = it.first;
            int moves = it.second;
            
            if(cur_sq==30) return moves;
            for(int i=1;i<=6;i++){
                int next_sq = cur_sq+i;
                if(next_sq>30) break;
                if(board[next_sq]!=-1) next_sq = board[next_sq];
                if(!vis[next_sq]) q.push({next_sq, moves+1}), vis[next_sq]=true;
            }
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends