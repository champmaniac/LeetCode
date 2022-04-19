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

//vector<TreeNode*> arr;                    // this code is using and extra space SC O(n)

TreeNode *first,*second,*prevPtr; 
class Solution {
public:
    // void dfs(TreeNode* cur){              // this code is using and extra space SC O(n)
    //     if(cur==NULL) return;
    //     dfs(cur->left);
    //     arr.push_back(cur);
    //     dfs(cur->right);
    // }
    // void recoverTree(TreeNode* root) {
    //     arr={};
    //     dfs(root);
    //     //arr is the inorder traversal
    //     TreeNode *first, *second;
    //     first=second=NULL;
    //     for(int i=0;i<arr.size()-1;i++){
    //         if(arr[i]->val >  arr[i+1]->val){
    //             if(first==NULL) first = arr[i];
    //             second = arr[i+1];
    //         }
    //     }
    //     swap(first->val,second->val);
    //     //return root;
    // }
    
    
    
    void dfs(TreeNode* cur){
        if(cur==NULL) return;
        dfs(cur->left);
        if(prevPtr!=NULL && prevPtr->val>cur->val){
            if(first==NULL)
                first =prevPtr;
            second= cur;
        }
        prevPtr=cur;
        dfs(cur->right);
    }
    
    void recoverTree(TreeNode* root) {
        first=second=prevPtr=NULL;
        dfs(root);
        swap(first->val,second->val);
    }
};