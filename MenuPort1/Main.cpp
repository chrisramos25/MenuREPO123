#include <iostream>
#include "guessGame.h"

using namespace std;

int main() {
    int game = 0;


    cout << "Choose a game\n";
    cout << "1) Number Guessing Game\n";
    cout << "2) Rock Paper Scissors\n";
    cout << "3) Dice Game\n";
    cout << "\nEnter your choice: ";

    cin >> game;

    switch (game) {
    case 1:
        cout << "You choose Number Guessing Game\n";
        playGuessingGame();
        break;
    case 2:
        cout << "You choose Rock Paper Scissors\n";
        break;
    case 3:
        cout << "You choose Dice Game\n";
        break;
    }







    /* void playGuessingGame();
     void playRockPaperScissors();
     void playDiceGame();
     void showHighScores();
   */
}