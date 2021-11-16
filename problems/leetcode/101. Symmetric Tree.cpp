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
    bool isSymmetric(TreeNode* root) {
        // Divide the tree in 2 subtrees and compare them
       return checkSymetry(root->left, root->right);
    }
    
    bool checkSymetry(TreeNode* tree1, TreeNode* tree2) {
        if(tree1 && tree2) {
            if(tree1->val != tree2->val) return false;
            
            // Compare left of tree1 with right of tree2(mirror)
            return checkSymetry(tree1->left, tree2->right) && checkSymetry(tree1->right, tree2->left);
            
        } else if(tree1 || tree2) {
            return false;
        } else {
            return true;
        };
    }
};
