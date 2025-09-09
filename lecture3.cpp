#include <iostream>
int answer;
int input;
int exponent;
int raiseToPower (int base, int exponent);
int main() {
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << "enter an exponent: ";
    std::cin >> exponent;
    answer = raiseToPower(input, exponent);
    std::cout << input << " raised to the power of " << exponent << " is " << answer << std::endl;
    return 0;
}

int raiseToPower (int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}