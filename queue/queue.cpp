#include <iostream>
#include <vector>
using namespace std;

#include "queue.h"

queue::queue() {
  size = 0;
}

void queue::enqueue(int num) {
  vec.insert(vec.end(), num);
  size++;
}

void queue::dequeue() {
  vec.erase(vec.begin());
  size--;
}

bool queue::isEmpty() {
  if (size > 0) {
    return false;
  }

  return true;
}

void queue::front() {
  cout << vec[0];
}

void queue::toString() {
  for (auto i = begin(vec); i < end(vec); i++) {
    cout << *i << " ";
  }
}
