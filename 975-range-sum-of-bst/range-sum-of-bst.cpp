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
    int dfs(TreeNode* node,int low,int high){
        if(!node) return 0;
        int sum = 0;
        if(node->val>=low && node->val<=high){
            sum+= node->val;
        }
        sum+= dfs(node->left,low,high);
        sum+= dfs(node->right,low,high);
        return sum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return dfs(root,low,high);
    }
};