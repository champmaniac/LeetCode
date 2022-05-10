// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void solve(vector<int> &nums, int low, int high, vector<int> &preOrder){
        if(low>high) return;
        int mid = (low+high)/2;
        preOrder.push_back(nums[mid]);
        solve(nums,low,mid-1,preOrder);
        solve(nums,mid+1,high,preOrder);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n = nums.size();
        vector<int> preOrder;
        solve(nums,0,n-1,preOrder);
        return preOrder;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends