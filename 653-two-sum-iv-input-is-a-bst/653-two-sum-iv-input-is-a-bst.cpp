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
    void inorderTrav(TreeNode* root,vector<int> &inorder){
        if(root==NULL) return;
        inorderTrav(root->left,inorder);
        inorder.push_back(root->val);
        inorderTrav(root->right,inorder);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        inorderTrav(root,inorder);
        int n = inorder.size();
        for(int i=0,j=n-1;i<j;){
            int sum = inorder[i]+inorder[j];
            if(sum==k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
        }
        return false;
    }
};