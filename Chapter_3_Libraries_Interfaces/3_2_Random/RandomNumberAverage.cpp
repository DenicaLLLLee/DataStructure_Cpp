/*
	Write a program that repeatedly generates a random real number between 0 and 1
	and then displays the average after a certain number of runs,
	Oyashi
	12/27/2016
*/

#include <iostream>
#include "HeaderFiles\random.h"

#define NO_OF_TRIALS 1000

using namespace std;

int main() {
	Randomize();
	double sum = 0;
	for (int i = 0; i < NO_OF_TRIALS; i++) {
		double randReal = RandomReal(0, 1);
		sum += randReal;
	}
	cout << "Number of trials = " << NO_OF_TRIALS << endl;
	cout << "Average " << sum / NO_OF_TRIALS << endl;
}