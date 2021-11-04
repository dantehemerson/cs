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
    int sumOfLeftLeaves(TreeNode* root, bool L = false) {
        if(root == nullptr) return 0;
        int leftSum = sumOfLeftLeaves(root->left, true);
        int rightSum = sumOfLeftLeaves(root->right);
        
        if(L && !root->left && !root->right) return root->val + leftSum + rightSum;
        return leftSum + rightSum;
    }
};
