/*
Change the implementation of the Quicksort algorithm so that, instead of picking the
first element in the vector as the pivot, the Partition function chooses the median
of the first, middle, and last elements.

	Oyashi
	01/11/2017
*/

#include <iostream>
#include <vector>
#include <functional>
#include "HeaderFiles\sorting.h"

using namespace std;

int main() {
	cout << "Implementation of Quick Sort" << endl;
	vector<int> inputArray = { 12,43,76,9,65,23,11,87 };
	vector<int>::iterator itr = inputArray.begin();
	cout << "Before Sorting" << endl;
	for (itr = inputArray.begin(); itr != inputArray.end(); ++itr) {
		cout << *itr << " ";
	}
	cout << endl;
	QuickSort(inputArray);
	cout << "After Sorting" << endl;
	for (itr = inputArray.begin(); itr != inputArray.end(); ++itr) {
		cout << *itr << " ";
	}
	cout << endl;
}