// program should print 1..10 inclusive, each number on its own line
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int i = 0;
  while(i < 10) {
    i += 1;
    cout << i << endl;
  }

  return 0;
}
