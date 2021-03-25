#include <iostream>
using namespace std;

#include "stack.h"

int main() {
  stack test;
  test.push(3);
  test.push(2);
  test.push(1);
  test.toString();

  cout << endl << endl;

  test.pop();
  test.toString();

  cout << endl << endl;

  test.top();

  cout << endl << endl;

  cout << test.isEmpty() << endl;
  test.pop();
  test.pop();
  cout << test.isEmpty() << endl;
}
