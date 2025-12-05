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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue <TreeNode *> q;
        if(root==NULL){
            return res;
        }
        q.push(root);
        bool reverse=false;
        int size;
        
        while(!q.empty()){
            size=q.size();
            vector<int> temp;
            while(size>0){
                root=q.front();
                q.pop();
                temp.push_back(root->val);
                if(root->left!= NULL){
                    q.push(root->left);
                }
                if(root->right!=NULL){
                    q.push(root->right);
                }
               
                
                size--;
            }
            if(reverse) {
                std::reverse(temp.begin(), temp.end());
            }
            res.push_back(temp);
            reverse=!reverse;
        }
        return res;
        
    }
};