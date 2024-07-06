#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << num << " is positive." << std::endl;
    } else if (num < 0) {
        std::cout << num << " is negative." << std::endl;
    } else {
        std::cout << "You entered zero." << std::endl;
    }

    return 0;
}
