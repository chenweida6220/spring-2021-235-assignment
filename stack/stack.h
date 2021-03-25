#pragma once
#include <vector>
using namespace std;

class stack {
private:
  vector<int> vec;
  int size;

public:
  stack();
  void push(int num);
  void pop();
  void top();
  bool isEmpty();
  void toString();
};
