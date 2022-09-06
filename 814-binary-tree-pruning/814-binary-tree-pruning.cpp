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
    int dfs(TreeNode* root){       // DFS
        if(root==NULL)
            return 0;
        int l= dfs(root->left);
        int r= dfs(root->right);
        
        if(l==0)
            root->left=NULL;
        if(r==0)
            root->right=NULL;
        return l+r+int(1==root->val);
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root){
            root->left = pruneTree(root->left);
            root->right = pruneTree(root->right);
            if(!root->left && !root->right && root->val==0) // Recursion
                return NULL;
        }
        return root;
        // dfs(root);
        // if(root->left==NULL && root->right==NULL && root->val==0)
        //     return NULL;
        // return root;
    }
};