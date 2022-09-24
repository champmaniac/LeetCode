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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        if(!root) return res;
        dfs(root,res,vector<int>{},0,targetSum);
        return res;
        
        
    }
    void dfs(TreeNode* root, vector<vector<int>>& res,vector<int> path, int targetSum,int target){
        if(!root){
            return;
        }
        path.push_back(root->val);
        targetSum+=root->val;
        if(!root->left && !root->right){
            if(targetSum==target)
                res.push_back(path);
            return;
        }
        dfs(root->left,res,path,targetSum,target);
        dfs(root->right,res,path,targetSum,target);
    }
};