/*
	Usage of binary search
	to find the string in array
	Oyashi
	01/03/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	string arr[] = { "a", "b", "c", "d", "e", "f" };
	string input;
	cout << "Enter the word to find : "; cin >> input;
	int ind = FindStringInSortedArray(input, arr, 6);
	if (ind >= 0) {
		cout << "Found at " << ind << endl;
	}
	else {
		cout << "Not found" << endl;
	}
}