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
    int deepestLeavesSum(TreeNode* root) {
        int max = maxDepth(root);

        return recursive(root, max);
    }
  
  
    int maxDepth(TreeNode* &root, int depth = 0) {
      if(!root) return depth - 1;
      
      return max(maxDepth(root->left, depth + 1), maxDepth(root->right, depth + 1));
    }
  
    int recursive(TreeNode* &root, int &maxDepth, int depth = 0) {
      if(!root) return 0;
      
      return maxDepth == depth ? root->val : 0 + recursive(root->left, maxDepth, depth + 1) + recursive(root->right, maxDepth, depth + 1);
    }
};
