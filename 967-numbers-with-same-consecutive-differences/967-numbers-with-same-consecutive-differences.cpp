class Solution {
private:
    void dfs(vector<int> &ans,int n,int &k,int num){
        //base case
        if(n==0){
            ans.push_back(num);
            return;
        }
        int digit=num%10;
        if(digit+k<=9){
            dfs(ans,n-1,k,num*10+digit+k);
        }
        if(digit-k>=0 && k!=0){
            dfs(ans,n-1,k,num*10+digit-k);
        }
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n==1) ans.push_back(0);
        for(int i=1;i<=9;i++){
            dfs(ans,n-1,k,i);
        }
        return ans;
    }
};