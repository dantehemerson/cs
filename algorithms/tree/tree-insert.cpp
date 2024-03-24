#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

class Node {
public:
  Node(int _val): val(_val) {}

  Node* left = nullptr;
  Node* right = nullptr;
  int val;
};

void printTree(const std::string& prefix, const Node* node, bool isLeft) {
  if( node != nullptr ) {
    cout << prefix;
    cout << (isLeft ? "├──" : "└──" );
    cout << node->val << std::endl;
    printTree( prefix + (isLeft ? "│   " : "    "), node->left, true);
    printTree( prefix + (isLeft ? "│   " : "    "), node->right, false);
  }
}

void printTree(const Node* node) {
  printTree("", node, false);
}

void treeInsert(Node*& root, int val) {
  Node* current = root;
  Node* parent = nullptr;

  while (current) {
    parent = current;

    if (val < current->val) {
      current = current->left;
    } else {
      current = current->right;
    }
  }


  if (!parent) {
   root = new Node(val);
  } else if (val < parent->val)  {
    parent->left = new Node(val);
  } else {
    parent->right = new Node(val);
  }
}

int main() {

  Node* root = new Node(12);
  root->left = new Node(5);
  root->right = new Node(18);
  root->left->left = new Node(2);
  root->left->right = new Node(9);
  root->right->left = new Node(15);
  root->right->right = new Node(19);
  root->right->left->left = new Node(13);
  root->right->left->right = new Node(17);

  printTree(root);

  treeInsert(root, 3);
  treeInsert(root, 20);
  treeInsert(root, 14);
  treeInsert(root, 16);

  cout << "After insert: " << endl;
  printTree(root);


  Node* root2 = nullptr;

  treeInsert(root2, 5);

  cout << "When tree is empty and insert" << endl;
  printTree(root2);

  return 0;
}
