#include <iostream>
#include <string>
using namespace std;

int main() {
	string answer;
	std::cout << "Welcome to the Name guessing game!\n";
	std::cout << "First Hint : The name has 4 letters.\n";
	std::cout << "Second Hint : The name starts with 'J' and ends with 'k'.\n";
	std::cout << "Last hint: The name has 1 vowel.\n";
	std::cin >> answer;

	if (answer == "Jack") {
		std::cout << "Correct!\n";
	}
	else {
		std::cout << "Wrong answer Try again!\n";
	}


}
