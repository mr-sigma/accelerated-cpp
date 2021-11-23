// 1-6 What happens if you type two names? E.G. "Big Ed"

#include <iostream>
#include <string>

int main()
{
  std::cout << "What is your name? ";
  std::string name;
  // reads in to name
  std::cin >> name;
  std::cout << "Hello, " << name
    << std::endl << "And what is yours? ";
  // Won't this endl clear the buffer and then the "and what is yours" will be
  // cleared by the std::cin on the line below? (it writes properly)

  // overwrites name (is okay because it's not const)
  std::cin >> name;
  // Writes the message to the stream
  std::cout << "Hello, " << name
    << "; nice to meet you too!" << std::endl;
  return 0;
}

// Typing two names won't work, the std::cin reads the first word character and
// will terminate when it encounters a whitespace character --> This is wrong
//
// The input buffer isn't cleared, so when the second read in occurs it reads
// the second name and writes it to 'name'
