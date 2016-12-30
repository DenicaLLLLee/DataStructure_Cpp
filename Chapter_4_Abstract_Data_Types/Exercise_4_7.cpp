/*
Write a program that uses a stack to reverse a sequence of integers read in one per
line from the console
	Oyashi
	12/20/2016
*/

#include <iostream>
#include <stack>
#include <algorithm>
#include "HeaderFiles\stackutility.h"

using namespace std;

int main() {
	int input;
	stack<int> intStack;
	cout << "Enter a list of integers, ending with 0 :" << endl;
	do
	{
		cin >> input;
		intStack.push(input);
	} while (input != 0);

	cout << "The integers in reverse order :" << endl;
	display(intStack);
}