/*
	Implementation of Quick Sort
	Oyashi
	01/07/2016
*/

#include <iostream>
#include <vector>
#include "HeaderFiles\sorting.h"

using namespace std;

int main() {
	cout << "Implementation of Merge Sort" << endl;
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