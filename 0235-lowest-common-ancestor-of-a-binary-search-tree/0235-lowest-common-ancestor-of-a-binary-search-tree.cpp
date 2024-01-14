/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //first intersection point in the path
        //TC:-O(H) SC:-O(1)
        
        
        while(true){
            if(root->val==p->val){
            return p;
            break;
        }
        if(root->val==q->val){
            return q;
            break;
        }
            if((root->val>p->val&&root->val<q->val)||(root->val<p->val&&root->val>q->val)){
                return root;
                break;
            }
            else if(root->val>p->val&&root->val>q->val)root=root->left;
            else root=root->right;
        }
        return root;
    }
};