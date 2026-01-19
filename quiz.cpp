#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string q1answer;
    std::string q2answer;
    std::string q3answer;

    std::cout << "Welcome to my totally random programming quiz!\n";
    std::cout << "Q1: What is the main purpose of a variable in programming?\n";
    std::cout << "A   To repeat code\n";
    std::cout << "B   To store data for later use\n";
    std::cout << "C   To display output\n";
    std::cin >> q1answer;

    if (q1answer == "A" || q1answer == "a") {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect.\n";
    }

    std::cout << "Q2: What is the purpose of an if-else statement?\n";
    std::cin >> q2answer;

    if (q2answer == "To execute different code on a condition") {
        std::cout << "This one was quite hard but you got it!\n";
    } else {
        std::cout << "Close enough!\n";
    }

    std::cout << "Q3: What is the main benefit of using functions?\n";
    std::cout << "A   Faster Execution\n";
    std::cout << "B   Better memeory usage\n";
    std::cout << "C   Code reuse and organization\n";
    std::cin >> q3answer;

    if (q3answer == "C" || q3answer = "c") {
        std::cout << "Correct! :D\n";
    } else {
        std::cout << "Incorrect :P\n";
    }

}