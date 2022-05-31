class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if(k>n)
            return false;
        unordered_map<string,int> m;
        for(int i=0;i<n-k+1;i++){
            string x= s.substr(i,k);
            m[x]++;
        }
        if(m.size()==pow(2,k))
            return true;
        return false;
    }
};