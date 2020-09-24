//LAB 2 ALVA, MICHELLE T TH
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int userChoice = 0;

	do {

		cout << "Please make a choice:\n"
			"1. Play Hot Potato\n"
			"2. Quit" << endl;
		cin >> userChoice;

		switch (userChoice) {

		case 1:
			cout << "How many players?" << endl;
			cout << "How many passes?" << endl;
			//game function.
			break;
		case 2:
			cout << "Quitting program." << endl;
			break;
		default: cout << "Invalid menu choice" << endl;
		}

	} while (userChoice != 2);

	cout << "Thank you for playing! Have a good day" << endl;

	system("pause");
	return 0;
}