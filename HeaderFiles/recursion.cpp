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

/*
* Function: FindStringInSortedArray
* Usage: index = FindStringInSortedArray(key, array, n);
* ------------------------------------------------------
* This function searches the array looking for the specified
* key. The argument n specifies the effective size of the
* array, which must be sorted according to lexicographic
* order. If the key is found, the function returns the
* index in the array at which that key appears. (If the key
* appears more than once in the array, any of the matching
* indices may be returned). If the key does not exist in
* the array, the function returns -1. In this implementation,
* FindStringInSortedArray is simply a wrapper; all the work
* is done by the recursive function BinarySearch.
*/
int FindStringInSortedArray(std::string key, std::string array[], int n) {
	return BinarySearch(key, array, 0, n - 1);
}
/*
* Function: BinarySearch
* Usage: index = BinarySearch(key, array, low, high);
* ---------------------------------------------------
* This function does the work for FindStringInSortedArray.
* The only difference is that BinarySearch takes both the
* upper and lower limit of the search.
*/
int BinarySearch(std::string key, std::string array[], int low, int high) {
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if (key == array[mid]) return mid;
	if (key < array[mid]) {
		return BinarySearch(key, array, low, mid - 1);
	}
	else {
		return BinarySearch(key, array, mid + 1, high);
	}
}
