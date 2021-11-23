// 1-5 is this valid? What does it do?
#include <iostream>
#include <string>

int main()
{
  {std::string s= "a string";
    { std::string x = s + ", really";
      std::cout << s << std::endl; }
    std::cout << x << std::endl;
  }
  return 0;
}
// It is invalid, it creates a scope with variable x, but attempts to use that
// variable in the parent scope after it has been destroyed
