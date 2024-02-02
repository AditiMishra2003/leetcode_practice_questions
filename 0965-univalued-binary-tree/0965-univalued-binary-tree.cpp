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
    void solve(int value,TreeNode * root, bool &ans){
        if(root==NULL){
            return;
        }
        if(root->val!=value){
           ans=false;
           
        }
         solve(value,root->left,ans);
         solve(value,root->right,ans);

    }

    bool isUnivalTree(TreeNode* root) {
       
        bool ans=true;
        solve(root->val,root,ans);
        return ans;
    
    }
};