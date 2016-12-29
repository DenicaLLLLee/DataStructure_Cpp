/*
	Write a program that simulates flipping a coin repeatedly and continues until three
	consecutive heads are tossed. At that point, your program should display the total
	number of coin flips that were made.
	12/27/2016
	Oyashi
*/

#include <iostream>
#include "HeaderFiles\random.h"

#define PROBABILITY 0.5

using namespace std;

int main() {
	Randomize();

	int count = 0;
	int totalCounter = 0;

	while(true) {
		if (RandomChance(PROBABILITY)) {
			cout << "Head" << endl;
			count++;
		}
		else {
			cout << "Tail" << endl;
			count = 0;
		}
		if (count == 3) break;
		totalCounter++;
	}
	cout << "It took " << totalCounter << " flips to get " << count << " consecutive heads." << endl;
}