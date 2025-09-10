#include <iostream>
int answer;
int input;
int exponent;
int raiseToPower (int base, int exponent);
bool even (int num);
int main() {
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << "enter an exponent: ";
    std::cin >> exponent;
    answer = raiseToPower(input, exponent);
    std::cout << input << " raised to the power of " << exponent << " is " << answer << std::endl;
    std::cout << "enter a number" << std::endl;
    std::cin >> input;
    even(input);
    if (even(input)) {
        std::cout << input << " is even" << std::endl;
    }else{
        std::cout << input << " is odd" << std::endl;
    return 0;
    }
}

int raiseToPower (int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

bool even (int num) {
    if ( num % 2 == 0 ) {
        return true;
    }else{
        return false;
    }
}