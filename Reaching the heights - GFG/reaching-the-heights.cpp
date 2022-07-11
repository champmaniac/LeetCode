// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++
bool invalid(vector<int> &ans,int n){
   int ini = 0;
   for(int i = 0; i < n; i++){
       if(i & 1){
           ini -= ans[i];
       }
       else{
           ini += ans[i];
       }
   }
   return ini <= 0;
}
vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a,a+n,greater<int>());
   vector<int> ans(n);
   
   int even = 0, odd = n-1;
   for(int i = 0; i < n; i++){
       if(i & 1){
           ans[i] = a[odd--];
       }
       else{
           ans[i] = a[even++];
       }
   }
   
   if(invalid(ans,n)) return vector<int>{-1};
   
   return (ans);
}
