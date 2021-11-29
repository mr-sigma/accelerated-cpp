// determine which of two numbers is larger
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int num1;
  int num2;

  cout << "Enter first number to compare: " << endl;
  cin >> num1;

  cout << "Enter second number to compare: " << endl;
  cin >> num2;

  cout << endl;

  if (num1 == num2) {
    cout << "The same number was specified both times: '" << num1 << "'; neither number is larger." << endl;
  } else {
    num1 > num2 ? cout << num1 << " is larger than " << num2 : cout << num2 << " is larger than " << num1;
  }
  cout << endl;
  return 0;
}
