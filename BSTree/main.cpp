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
  cout << t->get_debug_string() << "\n";
  cout << t->get_debug_string() << endl;
  cout << t->search(50) << endl;

  //- 10, 20, 30, 5, 17, 22, 35, 40 8, 3, 9
  t->insert(-10);
  t->insert(20);
  t->insert(30);
  t->insert(5);
  t->insert(17);
  t->insert(22);
  t->insert(35);
  t->insert(40);
  t->insert(8);
  t->insert(3);
  t->insert(9);
  std::cout << t->get_debug_string() << std::endl;

  std::cout << std::endl;
  //all new functions
  cout << t->treeSum() <<"\n";
  cout << t->countNodes() << "\n";
  cout << t->countLeaves() <<"\n";
  cout << t->countNodes(0) <<"\n";
  cout << t->heightTree() <<"\n";
  t->deleteRoutine(3);
  cout << t->get_debug_string() << endl;
}
