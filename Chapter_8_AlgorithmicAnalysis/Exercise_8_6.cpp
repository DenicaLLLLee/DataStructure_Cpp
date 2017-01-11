/*
	Write a program that generates a table which compares the performance of two
algorithms—linear and binary search—when used to find a randomly chosen integer
key in a sorted Vector<int>. The linear search algorithm simply goes through each
element of the vector in turn until it finds the desired one or determines that the key
does not appear. The binary search algorithm, which is implemented for string
arrays in Figure 5-5, uses a divide-and-conquer strategy by checking the middle
element of the vector and then deciding which half of the remaining elements to
search.
	Oyashi
	01/10/2017
*/

#include <iostream>
#include <vector>
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

	cout << "Please enter the type of search, you want to test " << endl;
	cout << "Search available = linear, binary" << endl;
	cin >> inputChoice;
	inputChoice = ConvertToLowerCase(inputChoice);

	//sortFunction function is passed as parameter.
	function<bool(std::vector<int> & vec, int key)> linearFunction;

	//type defined for the casting purpose
	typedef bool(*funtype)(std::vector<int> & vec, int key);

	if (inputChoice == "linear") {
		cout << "**** RESULTS FROM LINEAR SEARCH ****" << endl;
		linearFunction = LinearSearch;
	}
	else if (inputChoice == "binary") {
		cout << "**** RESULTS FROM BINARY SEARCH ****" << endl;
		linearFunction = BinarySearch;
	}
	else {
		cout << "Invalid input" << endl;
		return 0;
	}
	cout << "N       | Time(msec)" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << N[i] << "	| " << ElapsedTime(linearFunction, vec[i],5) << endl;
	}
}