#include <iostream>
using namespace std;

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

int countWays(int x) {
  return fib_iter(x+1);
}

int main() {
  int stairs = 5; // total # of ways should be 13 for 5th stair
  cout << "Number of ways = " << countWays(steps);
}
