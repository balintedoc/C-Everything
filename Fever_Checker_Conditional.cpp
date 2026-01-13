#include <iostream>

int main() {
    std::cout << "Enter your current body Temperature: F: ";
    int temp;
    std::cin >> temp;

    if (temp > 100) {
        std::cout << "You have a fever.";
    }
    else {
        std::cout << "You don't have a fever!";
    }


}