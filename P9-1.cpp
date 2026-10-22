#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {
	string str{};
	while (true) {
		cout << "Enter a string here: ";
		getline(cin, str);

		if (str == "Q") {
			break;
		}
		cout << "Total Characters: " << countCharacter(str) << endl;

	}
}

int countCharacter(string str) {
	for (int count = 0; count = str.length(); count++) {
		return count;
	}
	if (str == "") {
		return 0;
	}
}
