#include <iostream>
#include "guessGame.h"
#include <cstdlib> //allows for srand and rand functions to be used
#include <ctime>

using namespace std;

void playGuessingGame() {
    cout << "GUESSING GAME STARTED...";

	srand(time(0)); //starting (seed) for random numbers with rand() (time(0) so that it gives a different seed each time)
	cout << rand() % 100 + 1; //generates random number between 1 and 100

}