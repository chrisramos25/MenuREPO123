#include <iostream>
#include <cstdlib>
#include <ctime>
#include "guessGame.h"
#include "resumePlaying.h"

using namespace std;

void playRockPaper() {
	int userRps = 0;

	resumePlaying();
	srand(time(0));
	int compRps= rand() % 3 + 1;

	cout << "Choose your play \n1) Rock \n2) Paper \n3) Scissors\n";



	


/*

if userRps == compRps (you won)   userWin++
if userRps != compRps (you lost)  compWin++


userRps userWin = 3 (You won the round)
compRps compWin = 3 (Computer won the round)

*/

}

