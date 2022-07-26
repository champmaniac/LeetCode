/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findMaxi(TreeNode* root, int &maxi){
        if(!root) return 0;
        int leftMaxPath = max(0,findMaxi(root->left,maxi));
        int rightMaxPath = max(0,findMaxi(root->right,maxi));
        maxi = max(maxi, root->val+leftMaxPath+rightMaxPath);
        return (root->val)+max(leftMaxPath,rightMaxPath);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findMaxi(root,maxi);
        return maxi;
    }
};