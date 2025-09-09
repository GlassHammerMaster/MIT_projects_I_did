#include <iostream>

int do_while_example();

int main() {
    bool x;
    int y;
    int z;
    int w = 0;

    while (w < 10) {
        std::cout << w << " ";
        w++;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << i << " ";
    }
    std::cout << "\nenter binary value (0 or 1): ";
    int temp;
    std::cin >> temp;
    x = (temp != 0); // convert to bool
    if (x) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    std::cout << "enter a number: ";
    std::cin >> y;
    std::cout << "enter another number: ";
    std::cin >> z;
    if (y > z) {
        std::cout << y << " is greater than " << z;
    } else if (y < z) {
        std::cout << y << " is less than " << z;
    } else {
        std::cout << y << " is equal to " << z;
    }
    std::cout << std::endl;

    switch (y) {
        case 1:
            std::cout << "y is 1";
            break;
        case 2:
        case 3:
            std::cout << "y is 2 or 3";
            break;
        default:
            std::cout << "y is not 1, 2, or 3";
    }
    do_while_example();
    return 0;
}

int do_while_example() {
    int x;
    do {
        std::cout << "\ndo you want to continue? (1 for yes, 0 for no): ";
        std::cin >> x;
        if (x != 1 && x != 0) {
            std::cout << "invalid input, try again.";
        }
    } while (x != 0);
    return 0;
}