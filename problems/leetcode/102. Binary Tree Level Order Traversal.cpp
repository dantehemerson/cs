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
 //  BFS: Time: O(n) Space: O(n)
class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;

        if(!root) return vec;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> levelVector(levelSize);

            for (int i = 0; i < levelSize; i++) {
                TreeNode* u = q.front(); q.pop();

                levelVector[i] = u->val;

                if (u->left) {
                    q.push(u->left);
                }

                if (u->right) {
                    q.push(u->right);
                }
            }

            vec.push_back(levelVector);
        }

        return vec;
    }
};

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
