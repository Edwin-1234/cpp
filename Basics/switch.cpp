#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number between 1 and 5: ";
    std::cin >> num;

    switch (num) {
        case 1:
            std::cout << "You entered one." << std::endl;
            break;
        case 2:
            std::cout << "You entered two." << std::endl;
            break;
        case 3:
            std::cout << "You entered three." << std::endl;
            break;
        case 4:
            std::cout << "You entered four." << std::endl;
            break;
        case 5:
            std::cout << "You entered five." << std::endl;
            break;
        default:
            std::cout << "Invalid number! Please enter a number between 1 and 5." << std::endl;
            break;
    }

    return 0;
}
