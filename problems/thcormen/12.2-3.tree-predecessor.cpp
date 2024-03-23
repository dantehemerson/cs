/**
Exercise 12.2-3
Write the TREE-PREDECESSOR procedure.


TREE-PREDECESSOR(x)
  if x.left != NIL
    return TREE-MAXIMUM(x.left)

  y=x.p
  while y !=NIL and x == y.right
    x=y
    y=y.p

  return y
*/
#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

class Node {
public:
  Node(int _val):val(_val) {}

  Node* left = nullptr;
  Node* right = nullptr;
  int val;
};

Node* treeMinimum(Node* root) {
  if (root && root->left != nullptr) {
    return treeMinimum(root->left);
  }

 return root;
}


Node* treeMaximum(Node* root) {
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
  auto root = new Node(6);
  root->left = new Node(5);
  root->left->left = new Node(2);
  root->left->right = new Node(5);
  root->right = new Node(7);
  root->right->right = new Node(8);


  cout << "Tree Minimum (recursive): " << endl;
  Node* minimum = treeMinimum(root);
  cout << minimum->val << endl;


  cout << "Tree Maximum (recursive): " << endl;
  Node* maximum = treeMaximum(root);
  cout << maximum->val << endl;

  return 0;
}

