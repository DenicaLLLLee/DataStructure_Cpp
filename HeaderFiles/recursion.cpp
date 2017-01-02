#include <string>
#include "recursion.h"

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
		return(fibonacci(n - 1) + fibonacci(n - 2));
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

bool PalindromeCheck(std::string str) {
	if (str.length() == 0 || str.length() == 1) {
		return true;
	}
	else {
		if (str[0] == str[str.length() - 1]) {
			PalindromeCheck(str.substr(1, str.length() - 2));
		}
		else {
			return false;
		}
	}
	return true;
}
