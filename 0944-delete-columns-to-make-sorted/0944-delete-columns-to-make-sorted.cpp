class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int res=0;
        for(int c=0; c<strs[0].size();c++){
            for(int i=1;i<strs.size();i++){
                if(strs[i-1][c]>strs[i][c]){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};