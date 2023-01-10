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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // base case: both nodes are null
        if (p == nullptr && q == nullptr) return true;
        // base case: one node is null
        if (p == nullptr || q == nullptr) return false;
        // base case: both nodes have different values
        if (p->val != q->val) return false;
        // recursive case: check left and right child nodes
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};