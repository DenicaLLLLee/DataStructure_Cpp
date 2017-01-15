/*
As a test of your implementation of the Rational class in exercise 3, reimplement
the RPN calculator so that it performs its internal calculations using rational instead
of floating-point numbers. For example, your program should be able to produce the
following sample run (which demonstrates that rational arithmetic is always exact):

	Oyashi
	01/13/2017
*/

#include <iostream>
#include <string>
#include <stack>
#include "Chapter_9_ClassesObjects\HeaderFiles\Rational.h"
#include "Chapter_9_ClassesObjects\HeaderFiles\RatStack.h"

using namespace std;

int main() {
	RatStack ratStack;
	string input;
	long n = 0, d = 0;
	
	bool isNum = true, isDen = false;
	std::string::size_type sz;

	while (true) {
		Rational result;
		cout << ">";
		cin >> input;
		char ch = input[0];
		if (isdigit(ch)) {
			n = stol(input, &sz);
			cout << ">";
			cin >> input;
			d = stol(input, &sz);
			cout << ">";
			cin >> input;
			if (input != "/") {
				cout << "Please enter \ to create rational number" << endl;
				continue;
			}
			else if (input == "/") {
				Rational rat(n, d);
				ratStack.push(rat);
			}
		}
		else if (ch == '+') {
			result = ratStack.pop();
			ratStack.push(result.add(ratStack.pop()));
			cout << ratStack.peek().toString() << endl;
		}
		else if (ch == '-') {
			result = ratStack.pop();
			ratStack.push(result.sub(ratStack.pop()));
			cout << ratStack.peek().toString() << endl;
		}
		else if (ch == '*') {
			result = ratStack.pop();
			ratStack.push(result.mul(ratStack.pop()));
			cout << ratStack.peek().toString() << endl;
		}
		else if (ch == '\\') {
			result = ratStack.pop();
			ratStack.push(result.div(ratStack.pop()));
			cout << ratStack.peek().toString() << endl;
		}
		else {
			cout << "Invalid input" << endl;
		}
	}
}