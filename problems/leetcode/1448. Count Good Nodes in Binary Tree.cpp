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
 // Recursive, O(n)
class Solution {
public:
    int goodNodes(TreeNode* root, int maximum) {
        if (!root) return 0;

        int newMax = max(root->val, maximum);

        return (root->val >= maximum ? 1 : 0) + goodNodes(root->left, newMax) + goodNodes(root->right, newMax) ;
    }

    int goodNodes(TreeNode* root) {
       return  goodNodes(root, -10e4);
    }
};
