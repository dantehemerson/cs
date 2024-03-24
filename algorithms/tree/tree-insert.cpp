#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include "../../libs/cpp/tree.hpp"

using namespace std;


void treeInsert(NodeTest*& root, int val) {
  NodeTest* current = root;
  NodeTest* parent = nullptr;

  while (current) {
    parent = current;

    if (val < current->val) {
      current = current->left;
    } else {
      current = current->right;
    }
  }


  if (!parent) {
   root = new NodeTest(val);
  } else if (val < parent->val)  {
    parent->left = new NodeTest(val);
  } else {
    parent->right = new NodeTest(val);
  }
}

int main() {

  NodeTest* root = new NodeTest(12);
  root->left = new NodeTest(5);
  root->right = new NodeTest(18);
  root->left->left = new NodeTest(2);
  root->left->right = new NodeTest(9);
  root->right->left = new NodeTest(15);
  root->right->right = new NodeTest(19);
  root->right->left->left = new NodeTest(13);
  root->right->left->right = new NodeTest(17);

  printTree(root);

  treeInsert(root, 3);
  treeInsert(root, 20);
  treeInsert(root, 14);
  treeInsert(root, 16);

  cout << "After insert: " << endl;
  printTree(root);


  NodeTest* root2 = nullptr;

  treeInsert(root2, 5);

  cout << "When tree is empty and insert" << endl;
  printTree(root2);

  return 0;
}
