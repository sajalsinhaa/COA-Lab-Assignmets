#include <iostream>
using namespace std;

int main()
{
    int decimalNum, binaryNum = 0, rem, i = 1;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    while (decimalNum != 0) {
        rem = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += rem * i;
        i *= 10;
    }
    cout << "The binary representation of the decimal number is: " << binaryNum;
    return 0;
}
