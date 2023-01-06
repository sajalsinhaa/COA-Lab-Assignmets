#include <iostream>

int main()
{
    int num = 20; // the number whose bits we want to sum
    int sum = 0;  // the sum of the bits

    // loop through each bit of the number
    while (num > 0)
    {
        // add the current least significant bit to the sum
        sum += num % 2;

        // shift the number right by 1 bit
        num >>= 1;
    }

    std::cout << "The sum of the bits is: " << sum << std::endl;

    return 0;
}
