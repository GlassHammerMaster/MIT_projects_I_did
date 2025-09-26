#include <iostream>

int arr[4] = {1,2,3,4}; //array is read with n-1 where n is the number of elements
int sum(int a[]);


int main() {
    int arr2[4];
    int twoDimArray[2][4];
    twoDimArray[0][0] = 6;
    twoDimArray[0][1] = 0;
    twoDimArray[0][2] = 9;
    twoDimArray[0][3] = 6;
    twoDimArray[1][0] = 2;
    twoDimArray[1][1] = 0;
    twoDimArray[1][2] = 1;
    twoDimArray[1][3] = 1;
    std::cout << "Please enter 4 numbers: " << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cin >> arr2[i];
    }
    std::cout << "You entered: ";
    for (int i = 0; i < 4; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "The sum of the array is " << sum(arr2) << std::endl;
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 4; k++) {
            std::cout << twoDimArray[j][k] << " ";
        }
        std::cout << std::endl;
    }
}

int sum(int a[]) {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += a[i];
    }
    return total;
}