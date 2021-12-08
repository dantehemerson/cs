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
    TreeNode* searchBST(TreeNode*& root, int& val) {
        if(!root || root->val == val) return nullptr;
        
        auto leftSearch = searchBST(root->left, val);
        if(leftSearch) return leftSearch;
        
        return searchBST(root->right, val) ;
    }
};