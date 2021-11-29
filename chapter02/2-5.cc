// ask for a person's name, and generate a framed greeting
// with specified padding
#include <iostream>
#include <string>

//say what standard-library names we use
using std::cout;
using std::endl;
using std::string;

int main()
{
  const string::size_type square_size = 4;

  int r_sq = 0;
  int r_rec = 0;
  int r_tri = 0;

  // draw square
  cout << "Drawing square:" << endl;
  while(r_sq != square_size) {
    // extra characters because the square looks rectangular on my screen
    cout << string(square_size + 2, '*') << endl;
    ++r_sq;
  }
  cout << endl;

  // draw rectangle
  cout << "Drawing rectangle:" << endl;
  while(r_rec != square_size) {
    cout << string(square_size / 2, '*') << endl;
    ++r_rec;
  }
  cout << endl;

  // draw triangle
  cout << "Drawing triangle:" << endl;
  while(r_tri != square_size) {
    cout << string(square_size - r_tri, '*') << endl;
    ++r_tri;
  }
  return 0;
}
