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
    bool hasPathSum(TreeNode* root, int targetSum) {
        TreeNode* curr=root;
        if(curr==NULL){
            return false;
        }
        targetSum=targetSum-(curr->val);
        if(curr->left==NULL && curr->right==NULL){
            return targetSum==0;
        }
        return hasPathSum(curr->left,targetSum)|| hasPathSum(curr->right,targetSum);
    }
};