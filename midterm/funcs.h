#pragma once
using namespace std;

class Node {
private:
  string data;
  Node *next;

public:
  Node();
  Node(string data);
  Node(string data, Node *next);
  void setData(string data);
  void setNext(Node *next);
  string getData();
  Node *getNext();
  int length(Node *l);
  Node *middle(Node *head);
  Node *merge(Node *a, Node *b);
  Node *msort(Node *head);
  Node *rotate(Node *head, int position);
};
