#include <iostream>
int square(int x){ //squares the number, no need for source file since it's so simple
    return x*x;
}
int cube(int x){
    return x*square(x); //takes the result of square(x) and multiplies it by x
}

void increment(int &a) {
    a = a+1; //putting & before a variable means you are directly modifying the original variable
    std::cout << "input in increment is " << a << std::endl;
    }