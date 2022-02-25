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
    int maxDepth = -1;
    TreeNode* res =NULL;
    TreeNode* subtreeWithAllDeepest(TreeNode* root){
        postOrder(root,0);
        return res;
    }
    int postOrder(TreeNode* root,int Depth){
        if(root==NULL) return Depth;
        int left = postOrder(root->left,Depth+1);
        int right = postOrder(root->right,Depth+1);
        
        if(left==right){
            maxDepth = max(maxDepth,left);
            if(maxDepth==left){
                res=root;
            }
        }
        return max(left,right);
    }
};