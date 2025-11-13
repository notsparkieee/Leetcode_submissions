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
    bool dfs(TreeNode* nodea,TreeNode*nodeb){
        if(!nodea && !nodeb) return true;
        if(!nodea || !nodeb) return false;
        if(nodea->val==nodeb->val){
            return dfs(nodea->left,nodeb->right) && dfs(nodea->right,nodeb->left);
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfs(root,root);
    }
};