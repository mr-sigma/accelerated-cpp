// program should print 10..-5 inclusive, each number on its own line
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int i = 11;
  while(i  > -5) {
    i -= 1;
    cout << i << endl;
  }

  return 0;
}
