#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class NodeTest {
public:
  NodeTest(int _val): val(_val) {}

  NodeTest* left = nullptr;
  NodeTest* right = nullptr;

  int val;
};

void eulerTour(NodeTest* root) {
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


  NodeTest* root = new NodeTest(1);
  root->left = new NodeTest(2);
  root->left->left = new NodeTest(3);
  root->left->right = new NodeTest(4);

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
