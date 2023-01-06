#include <iostream>
using namespace std;

int main() {
  // Declare variables to store two integers
  int a = 5;
  int b = 3;

  // Use bitwise AND operator to find the bitwise AND of the two integers
  int c = a & b;
  cout << "Bitwise AND of " << a << " and " << b << " is: " << c << endl;

  // Use bitwise OR operator to find the bitwise OR of the two integers
  c = a | b;
  cout << "Bitwise OR of " << a << " and " << b << " is: " << c << endl;

  // Use bitwise XOR operator to find the bitwise XOR of the two integers
  c = a ^ b;
  cout << "Bitwise XOR of " << a << " and " << b << " is: " << c << endl;

  // Use bitwise NOT operator to find the bitwise NOT of integer a
  c = ~a;
  cout << "Bitwise NOT of " << a << " is: " << c << endl;

  return 0;
}
