#include <iostream>
using namespace std;

#include "queue.h"

int main() {
  queue test;
  test.enqueue(3);
  test.enqueue(2);
  test.enqueue(1);
  test.toString();

  cout << endl << endl;

  test.dequeue();
  test.toString();

  cout << endl << endl;

  test.front();

  cout << endl << endl;

  cout << test.isEmpty() << endl;
  test.dequeue();
  test.dequeue();
  cout << test.isEmpty() << endl;
}
