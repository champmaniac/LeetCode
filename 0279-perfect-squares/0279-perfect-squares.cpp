class Solution {
public:
    int numSquares(int n) {
        if(n<=0)
            return 0;
        static vector<int> cntPerfectSq({0});
        while(cntPerfectSq.size()<=n){
            int m = cntPerfectSq.size();
            int cntSquares = INT_MAX;
            for(int i=1;i*i<=m;i++)
                cntSquares=min(cntSquares,cntPerfectSq[m-i*i]+1);
            cntPerfectSq.push_back(cntSquares);
        }
        return cntPerfectSq[n];;
        
    }
};