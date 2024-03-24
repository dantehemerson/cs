#include <iostream>

using namespace std;

class NodeTest {
public:
  NodeTest(int _val): val(_val) {}

  NodeTest* left = nullptr;
  NodeTest* right = nullptr;
  int val;
};

void treeSalute() {
  cout << "hello world" << endl;
}


void printTree(const std::string& prefix, const NodeTest* node, bool isLeft) {
  if( node != nullptr ) {
    cout << prefix;
    cout << (isLeft ? "├──" : "└──" );
    cout << node->val << std::endl;
    printTree( prefix + (isLeft ? "│   " : "    "), node->left, true);
    printTree( prefix + (isLeft ? "│   " : "    "), node->right, false);
  }
}

void printTree(const NodeTest* node) {
  printTree("", node, false);
}
