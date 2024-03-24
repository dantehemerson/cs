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
//  Time: O(n) Space: O(n)
class Solution {
public:
    void levelOrder(TreeNode* root, vector<vector<int>>& vec, int level = 0) {
        if(root == nullptr) return;

        if (vec.size() <= level) {
            vec.push_back(vector<int>{});
        }

        vec[level].push_back(root->val);

        levelOrder(root->left, vec, level + 1);
        levelOrder(root->right, vec, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        levelOrder(root, vec);
        return vec;
    }
};
