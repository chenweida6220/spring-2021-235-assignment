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
  string get_debug_String();
  void setup();
};
