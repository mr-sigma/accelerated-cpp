// ask for a person's name, and generate a framed greeting
// with specified padding
#include <iostream>
#include <string>

//say what standard-library names we use
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  // ask for a name
  std::cout << "Please enter your first name: ";

  // read in the name
  std::string name;
  std::cin >> name;

  // build the message that we intend to write
  const std::string greeting = "Hello, " + name + "!";

  // the number of blanks surroundnig the greeting
  const int pad_row = 1;
  const int pad_col = 10;

  // the number of raws and columns to write
  const int rows = pad_row * 2 + 3;
  const string::size_type cols = greeting.size() + pad_col *2 + 2;

  // write a blank line to seperate input and output
  std::cout << std::endl;

  // write rows of output
  // invariant: we have written x rows so far
  for (int r = 0; r != rows; ++r) {
    string::size_type c = 0;

    // invariant: we have written c characters so far in the current row
    while (c != cols) {
      // is it time to write the greeting?
      // meaning that we are in the row after the asteriks and
      // the padding (pad + 1) and we have written the frame for the row
      // already and the column padding (pad + 1)
      if (r == pad_row + 1 && c == pad_col + 1) {
        cout << greeting;
        c += greeting.size();
      } else {
        // are we at the border?
        if (r == 0 || r == rows - 1 ||
            c == 0 || c == cols - 1) {
          cout << "*";
        } else {
          cout << " ";
        }

        ++c;
      }
    }
    cout << endl;
  }
  return 0;
}
