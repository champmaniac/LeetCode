class Solution {
public:
    int mod = (int)1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n =arr.size();
        vector<int>left(n),right(n);
        stack<int>st;
        // left
        st.push(0);
        left[0]=1;
        for(int i=1;i<n;i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                st.pop();
            }
            if(st.empty()) 
                left[i]=i+1;
            else 
                left[i]=i-st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        //right
        st.push(n-1);
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.empty()) 
                right[i]=n-i;
            else 
                right[i]=st.top()-i;
            st.push(i);
        }
        int res=0;
        for(int i=0;i<n;i++){
            long long prod = (left[i]*right[i])%mod;
            prod=(prod*arr[i])%mod;
            res=(res+prod)%mod;
        }
        return res%mod;
    }
};