/*
The digital root of an integer n is defined as the result of summing the digits
repeatedly until only a single digit remains. For example, the digital root of 1729
can be calculated using the following steps:
Step 1: 1 + 7 + 2 + 9 % 19
Step 2: 1 + 9 % 10
Step 3: 1 + 0 % 1
Introduction to Recursion – 199 –
Because the total at the end of step 3 is the single digit 1, that value is the digital
root.
Write a function DigitalRoot(n) that returns the digital root of its argument.
Although it is easy to implement DigitalRoot using the DigitSum function from
exercise 6 and a while loop, part of the challenge of this problem is to write the
function recursively without using any explicit loop constructs.
Oyashi
01/04/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int input;
	cout << "Please enter the number to get the root of its digits : "; cin >> input;
	cout << "Final root = " << DigitRoot(input) << endl;
}