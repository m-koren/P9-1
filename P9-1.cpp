#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main(void) {
	string str{};
	while (true) {
		cout << "Enter a string here or Q to quit: ";
		getline(cin, str);

		if (str == "Q") {
			break;
		}
		cout << "Total Characters: " << countVowel(str) << endl;
	}
}
int countVowel(string str) {
	int temp = 0;
	for (int x = 0; x < str.length(); x++) {
		if (str.at(x) == 'a' || str.at(x) == 'A' || str.at(x) == 'e' || str.at(x) == 'E' || str.at(x) == 'i' || str.at(x) == 'I' || str.at(x) == 'o' || 
			str.at(x) == 'O' || str.at(x) == 'u' || str.at(x) == 'U') {
			temp++;
		}
	}
	return temp;
}