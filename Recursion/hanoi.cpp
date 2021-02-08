#include <iostream>
using namespace std;

/*
Tower of Hanoi
- Only one disk can be moved at a time
- A disk can only be moved if it is the uppermost disk on a stack
- No disk can be placed on top of a smaller disk
*/

void hanoi(int diskNum, char initial, char destination, char temp) {
  if (diskNum == 0) {
    cout << "No moves needed.";
  }
  else if (diskNum == 1) {
    cout << "Move disk " << diskNum << " from rod " << initial << " to rod " << destination << endl;
  }
  // ? ??
  else {
    hanoi(diskNum-1, initial, destination, temp);
    cout << "Moving disk " << diskNum << " from rod " << initial << " to rod " << destination << endl;
    hanoi(diskNum-1, initial, destination, temp);
  }
}

int main() {
  hanoi(4, 'a', 'b', 'c');
}
