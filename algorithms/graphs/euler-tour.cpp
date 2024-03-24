#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Node {
public:
  Node(int _val): val(_val) {}

  Node* left = nullptr;
  Node* right = nullptr;

  int val;
};

void eulerTour(Node* root) {
  if (!root) return;

  cout << root->val << " ";

  if (root->left) {
    eulerTour(root->left);
    cout << root->val << " ";
  }

  if (root->right) {
    eulerTour(root->right);
    cout << root->val << " ";
  }
}

int main() {


  Node* root = new Node(1);
  root->left = new Node(2);
  root->left->left = new Node(3);
  root->left->right = new Node(4);

  // Tree Structure:
  //     1
  //    /
  //   2
  //  / \
  // 3   4


  eulerTour(root);
  // Output: 1 2 3 2 4 2 1

  return 0;
}
