#include <iostream>
#include "library.h"
int answer;
int input;
int exponent;
int raiseToPower (int base, int exponent); //declaration
bool even (int num); //declaration
int main() {
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << "enter a second number: ";
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
    }
    std::cout << "the square of " << input << " is " << square(input) << std::endl;
    std::cout << "the cube of " << input << " is " << cube(input) << std::endl;
    increment(input);
    std::cout << "after increment, input is " << input << std::endl;
    std::cout << "before swap, input is " << input << " and exponent is " << exponent << std::endl;
    swap(input, exponent);
    std::cout << "after swap, input is " << input << " and exponent is " << exponent << std::endl;
    return 0;
}

int raiseToPower (int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) { //for each exponent, will multiply base by result once
        result *= base; //result is then switched to the new value and loop continues
    }
    return result;
}

bool even (int num) {
    if ( num % 2 == 0 ) { //if the number is divisible by 2 with no remainder,
        return true; //it is even
    }else{
        return false;
    }
}