#include <string>

int main()
{
  // are the below definitions valid?

  const std::string exclam = "!"; // yes
  const std::string message = "Hello" + ", world" + exclam; // no, when using + operator one of the operands must be a string, not a string literal

  return 0;
}
