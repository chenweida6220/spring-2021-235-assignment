#include <iostream>
using namespace std;

#include "Node.h"
#include "BSTree.h"

int main() {
  Node *n = new Node(20);
  Node *n2 = new Node(30);
  n->setLeft(n2);
  n2 = new Node(40);
  n->setRight(n2);
  cout << "  " << n->getData() << endl;
  cout << " /  \\" << endl;
  cout << n->getLeft()->getData();
  cout << "  ";
  cout << n->getRight()->getData() << endl;

  cout << endl;

  BSTree *t = new BSTree();
  t->setup();
  cout << t->get_debug_String() << "\n";
}
