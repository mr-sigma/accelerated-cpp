// Is this valid? -> yes, the block comment symbol is read as part of the comment

#include <iostream>

int main() 
{
  // check
  // it
  // out /*
  // this 
  // */ runs
  std::cout << "Hello, word!" << std::endl;
  return 0;
}
