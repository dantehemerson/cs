/**
Exercise 12.2-2
Write recursive versions of TREE-MINIMUM and TREE-MAXIMUM


TREE-MAXIMUM(x)
  if x AND x.right != NIL:
    TREE-MAXIMUM(x.right)
  return x

TREE-MINIMUM(x)
  if x AND x.left != NIL:
    TREE-MINIMUM(x.left)
  return x
*/
#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

class NodeTest {
public:
  NodeTest(int _val):val(_val) {}

  NodeTest* left = nullptr;
  NodeTest* right = nullptr;
  int val;
};

NodeTest* treeMinimum(NodeTest* root) {
  if (root && root->left != nullptr) {
    return treeMinimum(root->left);
  }

 return root;
}


NodeTest* treeMaximum(NodeTest* root) {
  if (root && root->right != nullptr) {
    return treeMaximum(root->right);
  }

 return root;
}

int main() {

  /** Tree:
         6
       /   \
      5     7
     / \     \
    2   5     8
  */
  auto root = new NodeTest(6);
  root->left = new NodeTest(5);
  root->left->left = new NodeTest(2);
  root->left->right = new NodeTest(5);
  root->right = new NodeTest(7);
  root->right->right = new NodeTest(8);


  cout << "Tree Minimum (recursive): " << endl;
  NodeTest* minimum = treeMinimum(root);
  cout << minimum->val << endl;


  cout << "Tree Maximum (recursive): " << endl;
  NodeTest* maximum = treeMaximum(root);
  cout << maximum->val << endl;

  return 0;
}

