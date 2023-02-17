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
    int res=INT_MAX, pre=-1;
    int minDiffInBST(TreeNode* root) {
        if(root->left!=NULL) minDiffInBST(root->left);
        if(pre>=0) 
            res=min(res,root->val-pre);
        pre=root->val;
        if(root->right!=NULL) minDiffInBST(root->right);
        return res;
    }
};