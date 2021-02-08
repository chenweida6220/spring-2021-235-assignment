#include <iostream>
using namespace std;

/*
Tower of Hanoi
- Only one disk can be moved at a time
- A disk can only be moved if it is the uppermost disk on a stack
- No disk can be placed on top of a smaller disk
*/

void hanoi(int numDisks, char initial, char destination, char temp) {
  if (numDisks == 0) {
    cout << "No moves needed.";
  }
  else if (numDisks == 1) {
    cout << "Move disk 1 from rod " << initial << " to rod " << destination << endl;
  }
  // ? ??
  
}

int main() {
  hanoi(5, 'a', 'b', 'c');
}
