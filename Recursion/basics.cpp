#include <iostream>
using namespace std;
/*
  6! = 6*5!
  5! = 5*4!
  4! = 4*6
  3! = 3*2
  2! = 2*1
  1! = 1 *1
  0! = 1
  fact(n) = {  1 if n = 0
               n * (n-1)! otherwise
Things to look for in a recursive solution:
1. Base case <-- when you just know the answer without recurring
2. reduction <-- the recursive call that will eventually get to the base case
Things to consider
1. Try small examples by hand
2. look for self similarity - smaller simpler problems
*/

int fact(int n) {
  if (n == 0){
    return 1;
  } else {
    return n * fact(n-1);
  }
}

/*
 *
 1 1 2 3 5 8 13 21 34
 the next fib number is the sum of the previous two fib numbers
*/

int fib(int n) {
  if (n < 2) {
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

// using loop instead of recursion
int fib_iter(int n) {
  int sum, x = 1, y = 1;

  if (n < 2) {
    return 1;
  }

  for (int z = 2; z <= n; z++) {
    sum = x + y;
    x = y;
    y = sum;
  }
  return sum;
}

int main() {
  int i;
  for (i = 0; i < 10 ; i++) {
    cout << i << "! = " << fact(i) << "\n";
  }

  cout << endl;

  for (i = 0; i < 10 ; i++) {
    cout << fib(i) << ", ";
  }

  cout << endl << endl;

  for (i = 0; i < 10 ; i++) {
    cout << fib_iter(i) << ", ";
  }

  cout << "\n";
  return 0;
}
