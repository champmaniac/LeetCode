class Solution {
public:
    void countingsort(vector<int>& nums){
		int n=nums.size();
		vector<int> count(100001,0);
		for(auto& x:nums){
			count[x+50000]++;
		}
		for(int i=1;i<count.size();i++){
			count[i]+=count[i-1];
		}
		vector<int> ans(n);
		for(auto& v:nums){
			ans[count[v+50000]-1]=v;
			count[v+50000]--;
		}
		nums=ans;
	}
	vector<int> sortArray(vector<int>& nums) {
		countingsort(nums);
		return nums;
	}
};