/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
// BFS O(n)
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;

        if (root) {
            q.push(root);
        }

        while (!q.empty()) {
            size_t levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* u = q.front();
                q.pop();

                bool isOnTheRightSide = i == levelSize - 1;
                if (isOnTheRightSide) {
                    res.push_back(u->val);
                }

                if (u->left) q.push(u->left);
                if (u->right) q.push(u->right);
            }
        }

        return res;
    }
};
