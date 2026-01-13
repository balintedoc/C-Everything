#include <iostream>
#include <string>

int main() {
    std::string q1answer;
    std::string q2answer;
    std::string q3answer;

    std::cout << "Welcome to the Trivia Quiz! \n";

    std::cout << "What is the name of the world's longest river?\n";

    std::cout << "Missouri River\n";

    std::cout << "Nile\n";

    std::cout << "Amazon River\n";

    std::cout << "Yangtze River\n";
    std::cin >> q1answer;

    if (q1answer == "Nile") {
        std::cout << "Correct.\n";
    }
    else {
        std::cout << "Incorrect\n";
    }

    std::cout << "How many bones are there in the human body?\n";

    std::cout << "92\n";

    std::cout << "150\n";

    std::cout << "206\n";

    std::cout << "10\n";
    std::cin >> q2answer;

    if (q2answer == "206") {
        std::cout << "Correct.\n";
    }
    else {
        std::cout << "Incorrect.\n";
    }

    std::cout << "What food never spoils?\n";

    std::cout << "Honey\n";

    std::cout << "Bread\n";

    std::cout << "Ice cream\n";

    std::cout << "Pickles\n";
    std::cin >> q3answer;

    if (q3answer == "Honey") {
        std::cout << "Correct\n";
    }
    else {
        std::cout << "Incorrect.\n";
    }

    std::cout << "Thanks for playing the Trivia Quiz!\n";

    return 0;
}