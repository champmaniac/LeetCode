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
    int depthMax;
    int maxDepth(TreeNode* root){
        if(root==NULL) return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1+max(lh,rh);
    }
    int deepestLeavesSum(TreeNode* root) {
        depthMax = maxDepth(root);
        return sumHelper(root,0);
    }
    int sumHelper(TreeNode* root, int depth){
        if(!root) return 0;
        if(depth==depthMax-1) return root->val;
        return sumHelper(root->left,depth+1)+sumHelper(root->right,depth+1);
    }
};