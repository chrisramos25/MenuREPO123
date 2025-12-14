#include <iostream>
#include "guessGame.h"
#include <cstdlib> //allows for srand and rand functions to be used
#include <ctime>
#include <limits>

using namespace std;

void playGuessingGame() {

	char resume;

    cout << "GUESSING GAME STARTED...";
	cout << "Press any KEY then Enter to continue.";
	cin >> resume;

	srand(static_cast<unsigned int>(time(0))); //starting (seed) for random numbers with rand() (time(0) so that it gives a different seed each time)
	int secretNumber = rand() % 100 + 1; //generates random number between 1 and 100
	int userGuess = 0;
	int attempts = 0;

	cout << "\nI have selected a number between 1 and 100. Can you guess it?\n";

	while (true) {
		if (!(cin >> userGuess)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter a valid number.\n";
			continue;
		}

		attempts++;

		if (userGuess > secretNumber) {
			cout << "Too high. Try again.\n";
		}
		else if (userGuess < secretNumber) {
			cout << "Too low. Try again.\n";
		}
		else {
			cout << "You are Correct!\n";
			break;
		}
	}

	cout << "You got it\n";
	cout << "\nAttempts: " << attempts << '\n';
}