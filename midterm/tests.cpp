#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
using namespace std;

#include "doctest.h"
#include "funcs.h"

TEST_CASE("testing msort") {
  Node *n = new Node("1");
  Node *n2 = new Node("2");
  Node *n3 = new Node("3");
  Node *n4 = new Node("4");
  Node *n5 = new Node("5");
  Node *n6 = new Node("6");
  n ->setNext(n2);
  n3->setNext(n4);
  n4->setNext(n5);
  n5->setNext(n6);

  Node *temp = n3->msort(n3);

  while (temp->getNext() != nullptr) {
    CHECK(stoi(temp->getData()) < stoi(temp->getNext()->getData()));
    temp = temp->getNext();
  }
}

TEST_CASE("testing rotate") {
  Node *s1 = new Node("6");
  Node *s2 = new Node("-30");
  Node *s3 = new Node("0");
  Node *s4 = new Node("55");
  Node *s5 = new Node("22");
  Node *s6 = new Node("17");
  s1->setNext(s2);
  s2->setNext(s3);
  s3->setNext(s4);
  s4->setNext(s5);

  Node *temp = s1->rotate(s1, 5);
  CHECK(temp->getNext()->getNext()->getNext()->getNext()->getData() == s5->getData());
}
