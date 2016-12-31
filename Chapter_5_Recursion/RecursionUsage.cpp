/*
	This program implements recursion
	paradigm by showing its usage in
	factorial calculation and fibonacci
	series.
	Oyashi
	12/31/2016
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int input;
	cout << "Please enter the number : "; cin >> input;
	cout << fibonacci(input) << endl;
}