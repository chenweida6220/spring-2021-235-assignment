#include <iostream>
#include <string> // stoi - convert string to int
using namespace std;

#include "funcs.h"

Node::Node() {
  next = nullptr;
}

Node::Node(string data) {
  this->data = data;
  next = nullptr;
}

Node::Node(string data, Node *next) {
  this->data = data;
  this->next = next;
}

void Node::setData(string data) {
  this->data = data;
}

void Node::setNext(Node *next) {
  this->next = next;
}

string Node::getData() {
  return data;
}

Node *Node::getNext() {
  return next;
}

int Node::length(Node *l) {
  int count = 0;

  while (l != nullptr) {
    count++;
    l = l->getNext();
  }

  return count;
}

Node *Node::middle(Node *head) {
  int mid = length(head)/2;
  Node *temp = head;
  int count = 1;

  do {
    temp = temp->getNext();
    count++;
  }
  while (count <= mid);

  return temp;
}

Node *Node::merge(Node *a, Node *b) {
  if (a == nullptr && b == nullptr) {
    cout << "Empty List.";
    return nullptr;
  }

  Node *mList = new Node();
  Node *temp = mList;

  while (a != nullptr && b != nullptr) {
    temp->setNext(new Node());
    temp = temp->getNext();

    if (stoi(a->getData()) < stoi(b->getData())) {
      temp->setData(a->getData());
      a = a->getNext();
    }
    else {
      temp->setData(b->getData());
      b = b->getNext();
    }

    while (a != nullptr) {
      temp->setNext(new Node());
      temp = temp->getNext();
      temp->setData(a->getData());
      a = a->getNext();
    }

    while (b != nullptr) {
      temp->setNext(new Node());
      temp = temp->getNext();
      temp->setData(b->getData());
      b = b->getNext();
    }
  }

  mList = mList->getNext();
  return mList;
}

Node *Node::msort(Node *head) {
  if (length(head) <= 1) {
    return head;
  }

  Node *initial = head;
  Node *midToEnd = middle(head);
  Node *temp = initial;

  while (temp->getNext() != midToEnd) {
    temp = temp->getNext();
  }

  temp->setNext(nullptr);
  initial = msort(initial);
  midToEnd = msort(midToEnd);
  head = merge(initial, midToEnd);
  return head;
}

Node *Node::rotate(Node *head, int position) {
  if (head == nullptr || position <= 1) {
    return head;
  }

  Node *temp = head;

  while (position > 1) {
    temp = temp->getNext();
    position--;
  }

  Node *var = temp;

  while (temp->getNext() != nullptr) {
    temp = temp->getNext();
  }

  temp->setNext(head);
  head = var->getNext();
  var->setNext(nullptr);
  return head;
}
