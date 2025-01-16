#include <iostream>
#include <stdlib.h>
using namespace std;

void terminal_clear(void) {
  system("clear");
}

int main(void) {
  int a, b, c;

  // Clean up terminal.
  terminal_clear();
  cout << endl;

  // Get the inputs.
  cout << "Enter first integer: ";
  cin >> a;
  cout << "Enter second integer: ";
  cin >> b;

  // Compute.
  c = a + b;

  // Output the computed value.
  cout << a << " + " << b << " = " << c << endl << endl;

  return 0;
}
