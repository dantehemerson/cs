/**
Exercise 12.1-3

Give a nonrecursive algorithm that performs an inorder tree walk.

(Hint: An easy solution uses a stack as an auxiliary data structure.
  A more complicated, but ele- gant, solution uses no stack but assumes that we can test two pointers for equality.)
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
    treeMinimum(root->left);
    cout << root->val << " ";
    treeMinimum(root->right);
  }
}

void inOrderTreeWalkNonRecursiveStack(Node* root) {
  Node* current = root;
  stack<Node*> stack;


  while (current) {
    stack.push(current);

    current = current->left;

    while (current == nullptr && !stack.empty()) {
      Node* top = stack.top();
      stack.pop();

      cout << top->val << " ";

      current = top->right;
    }
  }
}

void inOrderTreeWalkNonRecursiveStack2(Node* root) {
  Node* current = root;
  stack<Node*> stack;


  while (!stack.empty() || current != nullptr) {
    if (current != nullptr) {
      stack.push(current);
      current = current->left;
    } else {
      Node* top = stack.top();
      stack.pop();
      current = top;

      cout << current->val << " ";

      current = current->right;
    }
  }
}

void morris(Node* root) {
  if (root == nullptr) return;

  Node* previous;
  Node* current = root;


  while (current) {
    if (current->left == nullptr) {
      cout << current->val << " ";
      current = current->right;
    } else {
      previous = current->left;

      while (previous->right && previous->right != current) {
        previous = previous->right;
      }

      if (previous->right == nullptr) {
        previous->right = current;
        current = current->left;
      } else {
        previous->right = nullptr;
        cout << current->val << " ";
        current = current->right;
      }
    }
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


  cout << "In Order Tree Walk (recursive): " << endl;
  treeMinimum(root);
  cout << endl;


  cout << "In Order Tree Walk (non Recursive with stack): " << endl;
  inOrderTreeWalkNonRecursiveStack(root);
  cout << endl;

    cout << "In Order Tree Walk 2 (non Recursive with stack): " << endl;
  inOrderTreeWalkNonRecursiveStack2(root);
  cout << endl;



  cout << "In Order Tree Walk (Morris): " << endl;
  morris(root);
  cout << endl;




  return 0;
}

