#include <string>

int main()
{
  // are the below definitions valid?

  const std::string hello = "Hello"; // yes
  const std::string message = hello + ", world" + "!"; // yes

  return 0;
}
