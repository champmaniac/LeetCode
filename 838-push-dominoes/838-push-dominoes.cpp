class Solution {
public:
    string pushDominoes(string d) {
        int n = d.size();
        vector<int> left(n,-1), right(n);
        for(int i=0;i<n;i++){
            if(d[i]!='.') left[i]=i;
            else left[i] = (i-1>=0)?left[i-1]:-1;
            
            if(d[n-i-1]!='.') right[n-i-1]=n-i-1;
            else right[n-i-1] = (n-i<n)?right[n-i]:n;
        }
        for(int i=0;i<n;i++){
            if(d[i]!='.') continue;
            int left_power = (left[i]==-1 or d[left[i]]=='L')?INT_MAX:i-left[i];
            int right_power = (right[i]==n or d[right[i]]=='R')?INT_MAX:right[i]-i;
            
            if(left_power!=right_power){
                d[i] = (left_power<right_power)?'R':'L';
            }
        }
        return d;
    }
};