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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr) {
          return 0;
        }
        
        int leftSum = this->rangeSumBST(root->left, low, high);
        int rightSum = this->rangeSumBST(root->right, low, high);
      
        if(root->val >= low && root->val <= high) {
          return root->val + leftSum + rightSum;
        } else {
          return leftSum + rightSum;
        }
    }
};
