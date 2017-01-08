/*
	Efficient implementation of RaiseToPower
	Runs in O(log N) 
	Oyashi
	01/07/2016
*/

#include <iostream>
#include <vector>
#include "HeaderFiles\sorting.h"

using namespace std;

int main() {
	int base, power;
	cout << "Please enter the base and power : "; cin >> base >> power;
	cout << "The result = " << RaiseToPower(base, power) << endl;
}