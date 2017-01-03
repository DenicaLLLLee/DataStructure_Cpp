/*
	This program implements the idea
	of mutual recursion to find even
	or odd
	Oyashi
	01/03/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	unsigned int input;
	cout << "Please enter a number : "; cin >> input;
	if (IsEven(input)) {
		cout << "Given number is even" << endl;
	}
	else {
		cout << "Given number is odd" << endl;
	}
}