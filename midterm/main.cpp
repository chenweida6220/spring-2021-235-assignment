#include <iostream>
using namespace std;

#include "funcs.h"

int main() {
  Node *n = new Node("A");
  Node *temp = n;

  temp->setNext(new Node("B"));
  temp = temp->getNext();
  temp->setNext(new Node("C"));
  temp = temp->getNext();
  temp->setNext(new Node("D"));
  temp = temp->getNext();
  temp->setNext(new Node("E"));
  temp = temp->getNext();
  temp->setNext(new Node("F"));

  cout << "Length: " << n->length(n) << endl;
  cout << n->getData() << endl; // A
  cout << n->middle(n)->getData() << endl; // D

  Node *n2 = new Node("1");
  temp = n2;
  temp->setNext(new Node("2"));
  temp = temp->getNext();
  temp->setNext(new Node("3"));
  temp = temp->getNext();
  temp->setNext(new Node("4"));
  temp = temp->getNext();
  temp->setNext(new Node("5"));
  temp = temp->getNext();
  temp->setNext(new Node("6"));

  Node *n3 = new Node("-30");
  Node *n4 = new Node("55");
  Node *n5 = new Node("88");
  Node *n6 = new Node("24");
  n3->setNext(n4);
  n4->setNext(n5);
  n5->setNext(n6);

  temp = n5->msort(n5);
  while (temp != nullptr) {
    cout << temp->getData() << "-->";
    temp = temp->getNext();
  }
  cout << "nullptr" << endl;

  temp = n3->rotate(n3, 2);
  while (temp != nullptr) {
    cout << temp->getData() << "-->";
    temp = temp->getNext();
  }

  cout << endl;
}
