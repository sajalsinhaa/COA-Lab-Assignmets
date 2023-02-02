#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int greater = a > b ? a : b;
    while (true) {
        if (greater % a == 0 && greater % b == 0) {
            return greater;
        }
        greater++;
    }
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
    return 0;
}
