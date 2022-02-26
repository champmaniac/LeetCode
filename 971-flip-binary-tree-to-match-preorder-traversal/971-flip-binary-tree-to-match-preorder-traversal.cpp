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
    vector<int> res;
    int i=0;
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& v) {
        return dfs(root,v)?res:vector<int>{-1};
    }
    bool dfs(TreeNode* root, vector<int> &v){
        if(!root) return true;
        if(root->val!=v[i++]) return false;
        if(root->left && root->left->val!=v[i]){
            res.push_back(root->val);
            return dfs(root->right,v) && dfs(root->left,v);
        }
        return dfs(root->left,v) && dfs(root->right,v);
    }
};