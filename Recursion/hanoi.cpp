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
    cout << "Move a disk from " << initial << " to " << destination << endl;
  }
  else {
    hanoi(diskNum-1, initial, temp, destination);
    cout << "Move a disk from " << initial << " to " << destination << endl;
    hanoi(diskNum-1, temp, destination, initial);
  }
}

int main() {
  hanoi(4, 'a', 'b', 'c');
}
