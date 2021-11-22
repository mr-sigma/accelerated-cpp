// Is this valid? -> no, needs curly braces

#include <iostream>

int main() 
{
  /*block comment which terminates/*early*/and then tries to keep going*/
  std::cout << "Hello, word!" << std::endl;
  return 0;
}
