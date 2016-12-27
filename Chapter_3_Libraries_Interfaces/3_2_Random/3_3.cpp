/*
	Simulation of Slot Machine
	12/27/2016
	Oyashi
*/

#include <iostream>
#include <string>
#include "random.h"

enum Symbol
{
	CHERRY, LEMON, ORANGE, PLUM, BELL, BAR
};

using namespace std;

int main() {
	Randomize();
	string choice;
	int totalCash = 50;
	int earnedCash = 0;
	Symbol trial[3];

	cout << "You have $" << totalCash << ". ";
	cout << "Would you like to play?"; cin >> choice;

	while (choice != "no") {
		for (int i = 0; i < 3; i++) {
			int randInt = RandomInteger(0, 5);
			trial[i] = Symbol(randInt);
			switch (randInt) {
			case CHERRY: cout << "CHERRY	"; break;
			case LEMON: cout << "LEMON	"; break;
			case ORANGE: cout << "ORANGE	"; break;
			case PLUM: cout << "PLUM	"; break;
			case BELL: cout << "BELL	"; break;
			case BAR: cout << "BAR	"; break;
			}
		}

		if (trial[0] == BAR && trial[1] == BAR && trial[2] == BAR) { earnedCash = 250; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == BELL && trial[1] == BELL  && trial[2] == BELL || trial[2] == BAR) { earnedCash = 20; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == PLUM && trial[1] == PLUM && trial[2] == PLUM || trial[2] == BAR) { earnedCash = 14; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == ORANGE  && trial[1] == ORANGE && trial[2] == ORANGE || trial[2] == BAR) { earnedCash = 10; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == CHERRY  && trial[1] == CHERRY && trial[2] == CHERRY) { earnedCash = 7; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == CHERRY  && trial[1] == CHERRY) { earnedCash = 5; cout << "-- You win $" << earnedCash << endl; }
		else if (trial[0] == CHERRY) { earnedCash = 2; cout << "-- You win $" << earnedCash << endl; }
		else { earnedCash = -1; cout << "-- You win lose" << endl; }
		
		totalCash += earnedCash;
		cout << "You have $" << totalCash << ". ";
		cout << "Would you like to play?"; cin >> choice;
	}
}