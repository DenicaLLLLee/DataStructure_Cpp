/*
	Simple calculator
	to demonstrate passing of function
	as argument
	02/07/2017
	Oyashi
*/

#include <iostream>
#include <string>
#include <functional>

using namespace std;

typedef int(*func)(int, int);

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return (a > b ? a - b : b - a);
}

int mul(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return (a > b ? a / b : b / a);
}

int calculate(func fn, int a, int b) {
	return fn(a, b);
}

int main(){
	string calT;
	func fc;
	int num1, num2;
	cout << "Please enter any two number "; cin >> num1 >> num2;
	cout << "Please enter calculation type "; cin >> calT;
	if (calT == "add") {
		fc = &add;
	}
	else if (calT == "sub") {
		fc = &sub;
	}
	else if (calT == "mul") {
		fc = &mul;
	}
	else if (calT == "div") {
		fc = &division;
	}
	else {
		cout << "Invalid calculation type" << endl;
	}
	cout << "Result = " << calculate(fc, num1, num2) << endl;
}