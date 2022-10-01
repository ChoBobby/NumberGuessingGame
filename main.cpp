#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int randNum;
	int userNum = -1;
	int numGuesses = 0;
	char play;

	cout << "Welcome to my number guessing game, would you like to play? (Y or N): ";
	cin >> play;

	if (play == 'y' || play == 'Y') {
		cout << endl << "Great! Try to guess my number between 0-99. I will tell you if my number is lower or higher than your guess..." << endl;

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
			else {
				cout << "You got it!" << endl;
				cout << "Number of Guesses: " << numGuesses << endl;
			}
			++numGuesses;
		}
	}
	else if (play == 'n' || play == 'N') {
		cout << endl << "Have a nice day!" << endl;
	}
	else {
		cout << endl << "Error: Please type 'Y' or 'N'" << endl;
	}

	return 0;
}