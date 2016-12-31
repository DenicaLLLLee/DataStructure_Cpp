/*
	This program implements recursion
	paradigm by showing its usage in
	factorial calculation and fibonacci
	series.
	Oyashi
	12/31/2016
*/

#include <iostream>

using namespace std;

int factorial(int n);
int fibonacci(int n);
int EfficientFibonacci(int n);
int AdditiveSquence(int n, int t0, int t1);

int main() {
	int input;
	cout << "Please enter the number : "; cin >> input;
	cout << fibonacci(input) << endl;
}

int factorial(int n) {
	int prod = 1;
	if (n == 0) {
		return prod;
	}
	else {
		prod = n * factorial(n - 1);
	}
}

int fibonacci(int n) {
	int sum = 0;
	if (n == 1 || n == 0) {
		return n;
	}
	else if (n < 0) {
		return 0;
	}
	else {
		return(fibonacci(n - 1) + fibonacci(n-2));
	}
}

int EfficientFibonacci(int n) {
	return AdditiveSquence(n, 0, 1);
}

int AdditiveSquence(int n, int t0, int t1) {
	if (n == 0) return t0;
	if (n == 1) return t1;
	return AdditiveSquence(n - 1, t1, t0 + t1);
}