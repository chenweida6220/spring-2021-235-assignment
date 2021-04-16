#include <iostream>
using namespace std;

#include "Node.h"
#include "BSTree.h"

BSTree::BSTree() {
  root = nullptr;
}

void BSTree::insert(int d) {
}

string BSTree::get_debug_string_Helper(Node *root) {
  if(root == nullptr) {
    return "";
  }
  else {
    return get_debug_string_Helper(root->getLeft()) + to_string(root->getData()) + "-->" + get_debug_string_Helper(root->getRight());
	}
}

string BSTree::get_debug_String() {
  return get_debug_string_Helper(root);
}

void BSTree::setup() {
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setLeft(n);
  n = new Node(30);
  root->setRight(n);
	n = new Node(40);
  root->getLeft()->setLeft(n);
}
