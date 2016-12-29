/*
* File: craps.cpp
* ---------------
* This program plays the casino game called craps, which is
* played using a pair of dice. At the beginning of the game,
* you roll the dice and compute the total. If your first roll
* is 7 or 11, you win with what gamblers call a "natural."
* If your first roll is 2, 3, or 12, you lose by "crapping
* out." In any other case, the total from the first roll
* becomes your "point," after which you continue to roll
* the dice until one of the following conditions occurs:
*
* a) You roll your point again. This is called "making
* your point," which wins.
*
* b) You roll a 7, which loses.
*
* Other rolls, including 2, 3, 11, and 12, have no effect
* during this phase of the game.
*/

#include <iostream>
#include "HeaderFiles\random.h"


using namespace std;

bool TryToMakePoint(int point);
int RollTwoDice();

int main() {
	Randomize();
	cout << "This program plays a game of craps." << endl;
	int point = RollTwoDice();
	switch (point) {
	case 7: case 11:
		cout << "That's a natural. You win." << endl;
		break;
	case 2: case 3: case 12:
		cout << "That's craps. You lose." << endl;
		break;
	default:
		cout << "Your point is " << point << "." << endl;
		if (TryToMakePoint(point)) {
			cout << "You made your point. You win." << endl;
		}
		else {
			cout << "You rolled a seven. You lose." << endl;
		}
	}
	return 0;
}

/*
* Function: TryToMakePoint
* Usage: flag = TryToMakePoint(point);
* ------------------------------------
* This function is responsible for the part of the game
* during which you roll the dice repeatedly until you either
* make your point or roll a 7. The function returns true if
* you make your point and false if a 7 comes up first.
*/
bool TryToMakePoint(int point) {
	while (true) {
		int total = RollTwoDice();
		if (total == point) return true;
		if (total == 7) return false;
	}
}
/*
* Function: RollTwoDice
* Usage: total = RollTwoDice();
* -----------------------------
* This function rolls two dice and both prints and returns their sum.
*/
int RollTwoDice() {
	cout << "Rolling the dice . . ." << endl;
	int d1 = RandomInteger(1, 6);
	int d2 = RandomInteger(1, 6);
	int total = d1 + d2;
	cout << "You rolled " << d1 << " and " << d2 << " - that's "
		<< total << endl;
	return total;
}