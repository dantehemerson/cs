/**
12.1-3 Give a nonrecursive algorithm that performs an inorder tree walk. (Hint: An easy solution uses a stack as an auxiliary data structure. A more complicated, but ele- gant, solution uses no stack but assumes that we can test two pointers for equality.)
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

void preOrderTreeWalk(Node* root) {
  if (root) {
    cout << root->val << " ";
    preOrderTreeWalk(root->left);
    preOrderTreeWalk(root->right);
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
  preOrderTreeWalk(root);
  cout << endl;


  cout << "Post Order Tree Walk (recursive): " << endl;
  postOrderTreeWalk(root);
  cout << endl;

  return 0;
}

