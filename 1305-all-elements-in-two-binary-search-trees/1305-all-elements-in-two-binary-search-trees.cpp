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
    void inorder(TreeNode* root,vector<int>&vec){
        if(root){
            inorder(root->left,vec);
            vec.push_back(root->val);
            inorder(root->right,vec);
        }
    }
    void merge(vector<int> &ans,vector<int>& l1,vector<int> &l2){
       int n=l1.size();
        int m=l2.size();
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(l1[i]<l2[j]){
                ans[k]=l1[i];
                k++;
                i++;
            }
            else{
                ans[k]=l2[j];
                k++;
                j++;
            }
        }
        while(i<n){
            ans[k]=l1[i];
           k++;
            i++;
        }
        while(j<m){
            ans[k]=l2[j];
            
            k++;
            j++;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> l1;
        vector<int> l2;
        inorder(root1,l1);
        inorder(root2,l2);
        vector<int> ans(l1.size()+l2.size());
        merge(ans,l1,l2);
        return ans;
    }
};