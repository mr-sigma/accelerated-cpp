#include <iostream>

int main() {
  int k = 0;
  while (k != 10) {
    using std::cout; // namspacing cout for this block context -> don't need the std:: prefix
    cout << "*";
    ++k;
  }
  std::cout << std::endl; // block scope is destroyed above when completed, so need std:: prefix here
  return 0;
}
