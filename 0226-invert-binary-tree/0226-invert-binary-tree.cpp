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
    void swap(TreeNode *root){
         if(!root)return;
        invertTree(root->left);
        invertTree(root->right);
        TreeNode *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        
    }
    TreeNode* invertTree(TreeNode* root) {
       swap(root);
        return root;
    }
};