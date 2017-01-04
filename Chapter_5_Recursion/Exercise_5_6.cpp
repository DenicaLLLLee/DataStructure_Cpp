/*
Write a recursive function DigitSum(n) that takes a nonnegative integer and returns
the sum of its digits. For example, calling DigitSum(1729) should return
1 + 7 + 2 + 9, which is 19.
The recursive implementation of DigitSum depends on the fact that it is very easy
to break an integer down into two components using division by 10. For example,
given the integer 1729, you can divide it into two pieces as follows:
1 7 2 9
1 7 2
n / 1 0
9
n % 1 0
Each of the resulting integers is strictly smaller than the original and thus represents
a simpler case.
	Oyashi
	01/03/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int input;
	cout << "Please enter the number to calculate the sum of its digits : "; cin >> input;
	cout << "Total sum = " << DigitSum(input) << endl;
}