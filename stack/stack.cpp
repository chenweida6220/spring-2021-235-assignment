#include <iostream>
#include <vector>
using namespace std;

#include "stack.h"

stack::stack() {
  size = 0;
}

void stack::push(int num) {
  vec.insert(vec.begin(), num);
   size++;
}

void stack::pop() {
  vec.erase(vec.begin());
  size--;
}

void stack::top() {
  cout << vec[0];
}

bool stack::isEmpty() {
  if (size > 0) {
    return false;
  }

  return true;
}

void stack::toString() {
  for (auto i = begin(vec); i < end(vec); i++) {
    cout << *i << " ";
  }
}
