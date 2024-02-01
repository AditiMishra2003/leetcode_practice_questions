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
    int xparent=-1;
    int yparent=-1;
    int xdepth=0;
    int ydepth=0;
    void helper(TreeNode* root,int x,int y,int depth,int parent){
        if(root==NULL)return;
        if(root->val==x){
            xdepth=depth;
            xparent=parent;
        }
        else if(root->val==y){
            ydepth=depth;
            yparent=parent;
        }
        else{
            helper(root->left,x,y,depth+1,root->val);
            helper(root->right,x,y,depth+1,root->val);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)return false;
        helper(root,x,y,0,-1);
        return xparent!=yparent&&xdepth==ydepth;
    }
};