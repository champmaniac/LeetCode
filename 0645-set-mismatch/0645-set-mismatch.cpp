class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>temp;
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            temp[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(temp[i]>1){
                ans.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(temp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};