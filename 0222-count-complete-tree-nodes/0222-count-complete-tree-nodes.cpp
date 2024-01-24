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
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int leftheight=countleftheight(root);
        int rightheight=countrightheight(root);
        if(leftheight==rightheight)return (1<<leftheight)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int countleftheight(TreeNode* root){
        int count=0;
        while(root!=NULL){
            count++;
            root=root->left;
        }
        return count;
    }
      int countrightheight(TreeNode* root){
        int count=0;
        while(root!=NULL){
            count++;
            root=root->right;
        }
        return count;
    }

};