// 1-4 is this valid? What does it do?
#include <iostream>
#include <string>

int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }
  }
  return 0;
}
// It is valid, sends first string to the buffer, then flushes it with endl
// then, creates a new scope within the current one, sends second string to
// the buffer, and flushes to screen
