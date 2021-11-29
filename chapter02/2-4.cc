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
  cout << "Please enter your first name: ";

  // read in the name
  string name;
  cin >> name;

  // build the message that we intend to write
  const string greeting = "Hello, " + name + "!";

  // the number of blanks surroundnig the greeting
  const int pad = 1;

  // the number of rows to write
  const int rows = pad * 2 + 3;

  // write a blank line to seperate input and output
  cout << endl;

  // write rows of output
  // invariant: we have written x rows so far
  for (int r = 0; r != rows; ++r) {
    const string::size_type empty_line_whitespace = pad * 2 + greeting.size();

    // are we on the line to write the greeting?
    if (r == pad + 1) {
      cout << "*" << string(pad, ' ') << greeting << string(pad, ' ') << "*";
    } else {
      // we haven't learned about elseif yet, so...
      // if we are on the first or last line
      if (r == 0 || r == rows - 1) {
        cout << string(empty_line_whitespace + 2, '*');
      } else {
        cout << "*" << string(empty_line_whitespace, ' ') << "*";
      }
    }
    cout << endl;
  }
  return 0;
}
