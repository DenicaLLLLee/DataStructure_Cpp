/*
Although O(N log N) sorting algorithms are clearly more efficient than O(N2)
algorithms for large vectors, the simplicity of quadratic algorithms like selection sort
often means that they perform better for small values of N. This fact raises the
possibility of developing a strategy that combines the two algorithms, using
Quicksort for large vectors but selection sort whenever the vectors become less than
some threshold called the crossover point. Approaches that combine two different
algorithms to exploit the best features of each are called hybrid strategies.
Reimplement Sort using a hybrid of the Quicksort and selection sort strategies.
Experiment with different values of the crossover point below which the
implementation chooses to use selection sort, and determine what value gives the
best performance. The value of the crossover point depends on the specific timing
characteristics of your computer and will change from system to system.

Oyashi
01/11/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <functional>
#include "HeaderFiles\sorting.h"
#include "HeaderFiles\strutils.h"

using namespace std;

#define MAX_SIZE 10
#define THRESHOLD 100

int main() {
	int N[MAX_SIZE] = { 10, 20, 40, 100, 200, 400, 1000, 2000, 4000, 10000 };
	vector<int> vec[MAX_SIZE];

	for (int i = 0; i < MAX_SIZE; i++) {
		fillUpVector(vec[i], N[i]);
	}

	cout << "Implementation of Hybrid Sort" << endl;
	cout << "N       | Time(msec)" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << N[i] << "	| " << ElapsedTime(vec[i], THRESHOLD) << endl;
	}
}