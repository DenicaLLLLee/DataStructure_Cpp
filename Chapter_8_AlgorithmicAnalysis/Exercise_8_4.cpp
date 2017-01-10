/*
Write a function that keeps track of the elapsed time as it executes the Sort
procedure on a randomly chosen vector. Use that function to write a program that
produces a table of the observed running times for a predefined set of sizes.

This program displays the usage of passing function as parameter
and static_cast to choose a specific overloaded function.

	Oyashi
	01/09/2017
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

int main() {
	int N[MAX_SIZE] = { 10, 20, 40, 100, 200, 400, 1000, 2000, 4000, 10000 };
	vector<int> vec[MAX_SIZE];
	string inputChoice;

	for (int i = 0; i < MAX_SIZE; i++) {
		fillUpVector(vec[i], N[i]);
	}

	cout << "Please enter the type of sort, you want to test " << endl;
	cout << "Sort available = selection, insertion, merge, quick" << endl;
	cin >> inputChoice;
	inputChoice = ConvertToLowerCase(inputChoice);

	//sortFunction function is passed as parameter.
	function<void(std::vector<int> & vec)> sortFunction;

	//type defined for the casting purpose
	typedef void(*funtype)(std::vector<int> & vec);

	if(inputChoice == "selection"){
		cout << "**** RESULTS FROM SELECTION SORT ****" << endl;
		sortFunction = SelectionSort;
	}
	else if (inputChoice == "insertion") {
		cout << "**** RESULTS FROM INSERTION SORT ****" << endl;
		sortFunction = static_cast<funtype>(InsertionSort);
	}
	else if (inputChoice == "merge") {
		cout << "**** RESULTS FROM MERGE SORT ****" << endl;
		sortFunction = MergeSort;
	}
	else if (inputChoice == "quick") {
		cout << "**** RESULTS FROM QUICK SORT ****" << endl;
		sortFunction = static_cast<funtype>(QuickSort);
	}
	else {
		cout << "Invalid input" << endl;
		return 0;
	}
	cout << "N       | Time(msec)" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << N[i] << "	| " << ElapsedTime(sortFunction, vec[i]) << endl;
	}
}