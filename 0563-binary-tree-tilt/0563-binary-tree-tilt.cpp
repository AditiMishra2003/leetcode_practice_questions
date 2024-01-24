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
    int total=0;
    int solve(TreeNode* root,int sum){
       if(root==NULL)return 0;
       int left=solve(root->left,sum);
       int right=solve(root->right,sum);
       total+=abs(left-right);
       return left+right+root->val;
       
        }
    int findTilt(TreeNode* root) {
        solve(root,0);
        return total;
    }
};