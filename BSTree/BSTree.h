#pragma once
using namespace std;

#include "Node.h"

class BSTree {
private:
  Node *root;

public:
  BSTree();
  void insert(int d);
  string get_debug_string_Helper(Node *root);
  string get_debug_string();
  void setup();

  void deleteRoutine(int val);
  void deleteRoutine(Node *curr, Node *prev, int val);

  int treeSum();
  int treeSum(Node *curr);

  int search(int value);
  int search(Node *curr, int value);

  int countNodes();
  int countNodes(Node *curr);

  int countLeaves();
  int countLeaves(Node *curr);

  int sumNodeAtLevel(int lvl);
  int sumNodeAtLevel(Node *curr, int lvl, int currlvl);

  int heightTree();
  int heightTree(Node *curr);
};
