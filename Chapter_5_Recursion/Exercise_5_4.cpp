/*
Write an iterative implementation of the function Fib(n).
	Oyashi
	1/4/2017
*/

#include <iostream>

using namespace std;

void Fib(int n);

int main() {
	int input;
	cout << "Enter the number : "; cin >> input;
	Fib(input);
}

void Fib(int n) {
	int sum = 0, prevA = 0, prevB = 1, curr = 0;
	for (int i = 0; i < n; i++) {
		curr = prevA + prevB;
		cout << curr << " ";
		prevB = prevA;
		prevA = curr;
		sum += curr;
	}
	cout << endl;
	cout << sum << endl;
}