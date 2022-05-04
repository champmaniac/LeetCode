// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends

int comp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first){
        return (a.second<b.second);
    }
    return (a.first<b.first);
}
vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int s = arr[i][0]+arr[i][1];
        v.push_back({s,i+1});
    }
    sort(begin(v),end(v),comp);
    vector<int> res;
    for(int i=0;i<n;i++){
        int x = v[i].second;
        res.push_back(x);
    }
    return res;
}