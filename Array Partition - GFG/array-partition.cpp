// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

vector<int> seg(800010);
vector<bool> marked(800010);

void push(int v){
   if(marked[v]){
       seg[2 * v] |= seg[v];
       seg[2 * v + 1] |= seg[v];
       marked[v] = false;
       marked[2 * v] = marked[2 * v + 1] = true;
   }
}

int get_segment(int v, int l, int r, int pos){
   if(l == r){
       return seg[v];
   }
   else{
       push(v);
       int m = (l + r) / 2;
       if(pos <= m){
           return get_segment(2 * v, l, m, pos);
       }
       else{
           return get_segment(2 * v + 1, m + 1, r, pos);
       }
   }
}

void update_segment(int v, int l, int r, int query_l, int query_r){
   if(l == query_l && r == query_r){
       seg[v] |= 1;
       marked[v]=true;
   }
   else{
       push(v);
       int m = (l + r) / 2;
       if(query_r <= m){
           update_segment(2 * v, l, m, query_l, query_r);
       }
       else if(query_l > m){
           update_segment(2 * v + 1, m + 1, r, query_l, query_r);
       }
       else{
           update_segment(2 * v, l, m, query_l, m);
           update_segment(2 * v + 1, m + 1, r, m + 1, query_r);
       }
       seg[v] = seg[2 * v] | seg[2 * v + 1];
   }
}

class Solution{
   public:
   bool partitionArray(int N, int K, int M, vector<int> &A){
       for(int i = 0; i <= 4 * N; i++){
           seg[i] = 0;
           marked[i] = false;
       }
       
       sort(A.begin(), A.end());
       for(int i = 0; i < N; i++){
           int right = (int )(upper_bound(A.begin(), A.end(), A[i] + M) - A.begin());
           right--;
           int left = K + i - 1;
           if(i == 0){
               if(left <= right){
                   update_segment(1, 1, N, left + 1, right + 1);
               }
           }
           else if(get_segment(1, 1, N, i)){
               if(left <= right){
                   update_segment(1, 1, N, left + 1, right + 1);
               }
           }
               
       }
       if(get_segment(1, 1, N, N)){
           return true;
       }
       return false;
   }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, M;
        cin >> N >> K >> M;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        Solution obj;
        bool ans = obj.partitionArray(N, K, M, A);
        if(ans){
            cout << "YES\n";
        }
        else{
            cout<< "NO\n";
        }
    }
}
  // } Driver Code Ends