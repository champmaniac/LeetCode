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
    void helper(TreeNode* root, int val, int depth){
        if(root == NULL) return;
        if(depth == 1){
            TreeNode* left = root->left;
            TreeNode* right = root->right;
            root->left = new TreeNode(val);
            root->left->left =left;
            root->right = new TreeNode(val);
            root->right->right = right;
            return ;
        }
        helper(root->left, val, depth-1);
        helper(root->right, val, depth-1);
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newNode = new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        helper(root,val,depth-1);
        return root;
    }
};