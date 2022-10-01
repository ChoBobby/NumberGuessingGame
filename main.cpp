#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int randNum;
	int userNum = -1;
	int numGuesses = 1;
	char play;

	cout << "Welcome to my number guessing game, would you like to play? (Y or N): ";
	cin >> play;

	if (play == 'y' || play == 'Y') {
		cout << endl << "Great! Try to guess my number from 0 - 99. I will tell you if my number is higher or lower..." << endl;

		srand(time(0));
		randNum = rand() % 100;

		cout << endl << "...Start guessing!" << endl;

		while (userNum != randNum) {
			cin >> userNum;

			if (userNum < randNum) {
				cout << "Higher." << endl << endl;
			}
			else if (userNum > randNum) {
				cout << "Lower." << endl << endl;
			}
			else if (userNum == randNum) {
				cout << "You got it!" << endl;
				cout << "Number of Guesses: " << numGuesses << endl;
			}
			else {
				cout << "Error: Only numbers are allowed.";
			}
			++numGuesses;
		}
	}
	else if (play == 'n' || play == 'N') {
		cout << endl << "Have a nice day! Try again another time!" << endl;
	}
	else {
		cout << endl << "Error: Please type 'Y' or 'N'" << endl;
	}

	return 0;
}