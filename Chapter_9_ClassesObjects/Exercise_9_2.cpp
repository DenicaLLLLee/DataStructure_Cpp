/*
Using the CharStack class as a model, create a NumStack class that supports stack
operations for data of type double. Use this class to reimplement the RPN calculator
introduced in Chapter 4.

	RPN calculator

	Oyashi
	01/13/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\strutils.h"
#include "Chapter_9_ClassesObjects\HeaderFiles\NumStack.h"

using namespace std;

int main() {
	NumStack rpnStack;
	string input;
	double result = 0.0;

	while (true) {
		cout << ">";
		cin >> input;
		char ch = input[0];
		if (isdigit(ch)) {
			rpnStack.push(StringToReal(input));
		}
		else if (ch == '+') {
			result = rpnStack.pop();
			rpnStack.push(result + rpnStack.pop());
			cout << rpnStack.peek() << endl;
		}
		else if (ch == '-') {
			result = rpnStack.pop();
			rpnStack.push(result - rpnStack.pop());
			cout << rpnStack.peek() << endl;
		}
		else if (ch == '*') {
			result = rpnStack.pop();
			rpnStack.push(result * rpnStack.pop());
			cout << rpnStack.peek() << endl;
		}
		else if (ch == '\\') {
			result = rpnStack.pop();
			rpnStack.push(result / rpnStack.pop());
			cout << rpnStack.peek() << endl;
		}
		else {
			cout << "Invalid input" << endl;
		}
	}
}