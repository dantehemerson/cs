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

// O(n)
class Solution {
public:
    int diameterOfBinaryTreeRec(TreeNode* root, int& res) {
       if(!root) return 0;

       int lengthLeft = root->left ? 1 + diameterOfBinaryTreeRec(root->left, res) : 0;
       int lengthRight = root->right ? 1 + diameterOfBinaryTreeRec(root->right, res) : 0;

        int diameter = lengthLeft + lengthRight;
        res = max(res, diameter);

       return max(lengthLeft, lengthRight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        diameterOfBinaryTreeRec(root, res);

        return res;
    }
};
