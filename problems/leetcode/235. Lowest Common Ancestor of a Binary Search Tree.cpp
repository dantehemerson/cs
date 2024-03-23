/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**
  Complexity: O(h)
  Save the path from the root to the node p in a set.
  Then, traverse the tree from the root to the node q and check if the current node is in the set.
  The more close to q the node is, the more likely it is the LCA.
*/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_set<TreeNode*> check;

        auto current = root;

        while (current) {
            check.insert(current);

            if (p->val == current->val) {
                break;
            } else if (p->val <= current->val) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        current = root;
        auto lca = root;
        while (current) {
            if (check.count(current)) {
                lca = current;
            }

            if (q->val == current->val) {
                break;
            } else if (q->val <= current->val) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        return lca;
    }
};
