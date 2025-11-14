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
    bool solve(TreeNode* node){
        if(!node->left && !node->right){
            return  node->val;
        }
        int c = node->val;
        if(c==2){
          return solve(node->left) || solve(node->right);
        }
        return solve(node->left) && solve(node->right);

    }
public:
    bool evaluateTree(TreeNode* root) {
         
        return solve(root);
    }
};