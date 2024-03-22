/**
Exercise 12.1-4

Give recursive algorithms that perform preorder and postorder tree walks in ‚.n/ time on a tree of n nodes.
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

void treeMinimum(Node* root) {
  if (root) {
    cout << root->val << " ";
    treeMinimum(root->left);
    treeMinimum(root->right);
  }
}

void postOrderTreeWalk(Node* root) {
  if (root) {
    postOrderTreeWalk(root->left);
    postOrderTreeWalk(root->right);
    cout << root->val << " ";
  }
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


  cout << "Pre Order Tree Walk (recursive): " << endl;
  treeMinimum(root);
  cout << endl;


  cout << "Post Order Tree Walk (recursive): " << endl;
  postOrderTreeWalk(root);
  cout << endl;

  return 0;
}

