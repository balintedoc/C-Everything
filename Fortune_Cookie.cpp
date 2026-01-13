#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    std::srand(std::time(nullptr));

    std::string fortunes[] = {
        "Don't pursue happiness - create it",
        "All things are difficult before they are easy.",
        "The early bird gets the worm, but the second mouse gets the cheese.",
        "The fortune you search for is in another cookie."
    };

    int randomIndex = std::rand() % 4;
    std::string fortune = fortunes[randomIndex];

    std::cout << fortune;

    return 0;
}
