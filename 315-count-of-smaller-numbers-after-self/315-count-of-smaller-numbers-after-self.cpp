#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)


class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        ordered_multiset a;
        vector<int> ans(nums.size(),0);
        rrep(i,nums.size()){
            a.insert(nums[i]);
            int x= a.order_of_key(nums[i]);
            ans[i]=x;
        }
        return ans;
        
    }
};