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
    //tc=O(n2)
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        int n=nums.size();
        return build(nums,0,n-1);
        
    }
    TreeNode* build(vector<int>& nums,int start,int end){
        if(start>end){
            return NULL;
        }
        int maxindex=start;
        for(int i=start+1;i<=end;i++){
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }
        TreeNode* root=new TreeNode(nums[maxindex]);
        root->left=build(nums,start,maxindex-1);
         root->right=build(nums,maxindex+1,end);
        return root;
    }
   /* TreeNode* construct (vector<int> &nums, int i, int j) {
        if (i>j) return nullptr;
        int p = i; //stores index of largest element
        for (int k=i+1; k<=j; k++) {
            if (nums[k] > nums[p]) p = k;
        }
        TreeNode* root = new TreeNode (nums[p]);
        root->left = construct (nums, i, p-1);
        root->right = construct (nums, p+1, j);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct (nums, 0, nums.size()-1);
    }
*/
};