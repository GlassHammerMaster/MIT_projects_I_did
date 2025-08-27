#include <iostream>

int main() {
    bool x;
    int y;
    int z;
    std::cout << "enter binary value ";
    std::cin >> x;
    if (x) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    std::cout << "enter a number ";
    std::cin >> y;
    std::cout << "enter another number ";
    std::cin >> z;
    if (y>z){
        std::cout << y << " is greater than " << z;
    } else if (y<z) {
        std::cout << y << " is less than " << z;
    } else {
        std::cout << y << " is equal to " << z;
    }
    std::cout << std::endl;

    switch(y) {
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
    return 0;
}