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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        TreeNode* cur = root;
        while(cur!=NULL){
// First Case
// If Left doesn't exists it clearly means just push the current node and move right
            if(cur->left==NULL){
                preorder.push_back(cur->val);
                cur=cur->right;
            }
// Second Case
// Go to the left and from there go to the rightmost guy and it should not point to cur
            else{
                TreeNode* prev = cur->left;
                while(prev->right && prev->right!=cur){
                    prev = prev->right;
                }
                if(prev->right==NULL){
                    prev->right = cur;
                    preorder.push_back(cur->val);
                    cur = cur->left;
                }
                else if(prev->right==cur){
                    prev->right = NULL;
                    cur = cur->right;
                }
            }
        }
        return preorder;
    }
};