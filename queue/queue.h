#pragma once
using namespace std;

#include <vector>

class queue {
private:
  vector<int> vec;
  int size;

public:
  queue();
  void enqueue(int num);
  void dequeue();
  bool isEmpty();
  void front();
  void toString();
};
