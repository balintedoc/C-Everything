#include <iostream>

int main() {
    std::cout << "What level did you get? ";

    int level;
    std::cin >> level;

    if (level > 20) {
        std::cout << "Diamond Level ";
    }
    else if (level >= 15) {
        std::cout << "Platinum Level ";
    }
    else if (level >= 10) {
        std::cout << "Gold Level ";
    }
    else if (level >= 5) {
        std::cout << "Silver Level";
    }
    else if (level >= 0) {
        std::cout << "Bronze Level";
    }

    return 0;
}