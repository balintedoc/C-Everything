#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;


	cout << "Enter Numbers (type -1 to stop): \n";
	int x;
	while (cin >> x && x != -1) {
		v.push_back(x);
	}

	cout << "You Entered: \n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}
