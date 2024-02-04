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
    void inorder(TreeNode* root,vector<int> &v){
    if(root==NULL){
       return;
    }
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        TreeNode* ans=NULL;
        TreeNode* temp;
        for(auto x:v){
            if(ans==NULL){
                ans=new TreeNode(x);
                temp=ans;
            }
            else{
                 temp->right=new TreeNode(x);
                 temp=temp->right;
            }
        }
        return ans;
    }
};