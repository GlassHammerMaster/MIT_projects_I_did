#include <iostream>

// Pass-by-value: The function gets a copy of 'x'
void add_one_by_value(int x) {
    x = x + 1;
    std::cout << "Inside add_one_by_value: " << x << std::endl;
}

// Pass-by-pointer: The function gets the address of 'x'
void add_one_by_pointer(int* ptr) {
    if (ptr != nullptr) {
        *ptr = *ptr + 1;
        std::cout << "Inside add_one_by_pointer: " << *ptr << std::endl;
    } else {
        std::cout << "Null pointer received!" << std::endl;
    }
}

int main() {
    int my_number = 42; // Declare an integer variable
    int* my_pointer = &my_number; // Declare a pointer and store the address of my_number

    std::cout << "Value of my_number: " << my_number << std::endl;
    std::cout << "Address of my_number: " << &my_number << std::endl;
    std::cout << "Value of my_pointer (the address): " << my_pointer << std::endl;
    std::cout << "Value at the address pointed to by my_pointer: " << *my_pointer << std::endl;
    
    // Modify the value using the pointer
    *my_pointer = 100;
    std::cout << "New value of my_number: " << my_number << std::endl;

    int another_number = 10;
    std::cout << "Original value: " << another_number << std::endl;

    add_one_by_value(another_number);
    std::cout << "After add_one_by_value: " << another_number << std::endl; // Still 10

    std::cout << "---" << std::endl;

    // Pass the address of another_number using the '&' operator
    add_one_by_pointer(&another_number);
    std::cout << "After add_one_by_pointer: " << another_number << std::endl; // Now 11

    // Demonstrate null pointer safety
    int* null_ptr = nullptr;
    add_one_by_pointer(null_ptr);

    return 0;
}